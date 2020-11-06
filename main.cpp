#include <exception>
#include <iostream>
#include "binaryTree.h"
#include "pacient.h"
#include "cadastro.h"
using namespace std;
int main(){
  Pacient paciente1("Rodolfo", 50, "M");
  Pacient paciente2("Maria", 45, "F");
  Pacient paciente3("Maria", 45, "F");
  Pacient paciente4("Zeus", 50, "M");
  Pacient paciente5("Saulo", 50, "M");
  Pacient paciente6("Zzzz", 50, "M");
  Pacient paciente7("Teste", 50, "M");
  BinaryTree<Pacient> rootNode(paciente1);
  Cadastro cad(rootNode);
  cad.addPacient(paciente2);
  cad.addPacient(paciente4);
  try{
    cad.addPacient(paciente3);
  }catch(exception &e){
    cout<<e.what()<<endl;
  }
  try{
    cad.findPacient("Rodolfo");
  }catch(exception &e){
    cout<<e.what()<<endl;
  }
  cad.listPacients();

  return 1;
}
