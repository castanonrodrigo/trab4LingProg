#include <exception>
#include <iostream>
#include <string>
#include <limits>
#include "pacient.h"
#include "binaryTree.h"
#include "cadastro.h"
#include "oncologistPacient.h"
#include "pediatricPacient.h"
using namespace std;

int firstMenuSelection(){
  int i;
  do {
  cout<<"PRIMEIRO MENU"<<endl;
  cout<< "1 - Criar paciente de oncologista"<<endl;
  cout<< "2 - Criar paciente de pediatra"<<endl;
  cin>>i;
  }while (i != 1 && i != 2);
  return i;
}

int secondMenuSelection(){
  int i;
  do{
    cout<<"SEGUNDO MENU"<<endl;
    cout<<"1 - Adicionar paciente"<<endl;
    cout<<"2 - Procurar paciente"<<endl;
    cout<<"3 - Listar pacientes"<<endl;
    cout<<"-1 - Finalizar programa"<<endl;
    cin>>i;
  }while(i!=-1 && i!=1 && i!=2 && i!=3);
  return i; 
}

int main(){
  int pacientType = firstMenuSelection();
  BinaryTree<Pacient> *rootNode = new BinaryTree<Pacient>();
  Cadastro cadastro(rootNode);
  int opcao = 0;
  while(opcao != -1){
    opcao = secondMenuSelection();
    switch (opcao) {
      case 1:
        {
          string name, gender, particular;
          int age;
          Pacient *ptr = NULL;
          cout<<"Insira nome: ";
          cin>>name;
          cout<<"Insira idade: ";
          cin>>age;
          cout<<"Insira genero: ";
          cin>>gender;
          if(pacientType == 1){
            cout<<"Insira regiao tumor: ";
            cin>>particular;
            ptr = new OncologistPacient(name, age, gender, particular);
          }else{
            cout<<"Insira nome responsavel: ";
            cin>>particular;
            ptr = new PediatricPacient(name, age, gender, particular);
          }
          try{
            cadastro.addPacient(ptr);
          }catch(exception &e){
            cout<<e.what()<<endl;
          }
          break;
        }
      case 2:
        {
          string name;
          cout<<"Insira o nome a ser pesquisado: ";
          cin>>name;
          try{
            cadastro.findPacient(name);
          }catch(exception &e){
            cout<<e.what()<<endl;
          }
          break;
        }
      case 3:
        cadastro.listPacients();
        break;
      default:
        break;
    }
    if(opcao !=-1){
      cout<<endl;
      cout << "Para sair do programa - Digite -1" << endl;
      cout << "Para retornar ao menu - Digite qualquer numero" << endl;
      cin >> opcao;
      cin.ignore(numeric_limits<streamsize>::max(),'\n');
   } 
  }
  return 1;
}
