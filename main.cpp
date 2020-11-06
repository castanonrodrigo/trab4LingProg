#include <exception>
#include <iostream>
#include <string>
#include "pacient.h"
#include "binaryTree.h"
#include "cadastro.h"
#include "oncologistPacient.h"
using namespace std;
void emulateInput(string name, int age, string gender, string tumor, Cadastro &cadastro){
  OncologistPacient *ptr = new OncologistPacient(name,age, gender, tumor);
  try{
    cadastro.addPacient(ptr);
  }catch(exception &e){
    cout << e.what()<<endl;
    cout << name<<endl;
  }
}

int main(){

  OncologistPacient *root = new OncologistPacient("Marcos", 34, "M", "coxa");
  OncologistPacient *node = new OncologistPacient("Fernando", 34, "M", "coxa");
  OncologistPacient *node2 = new OncologistPacient("Alan", 34, "M", "coxa");
  BinaryTree<Pacient> *rootNode = new BinaryTree<Pacient>();
  Cadastro cad(rootNode);
  emulateInput("Marcos", 34, "M", "perna", cad);
  emulateInput("Fernando", 34, "M", "perna", cad);
  emulateInput("Alana", 34, "M", "perna", cad);
  emulateInput("Teste", 34, "M", "perna", cad);
  cad.listPacients();
  cad.findPacient("Alana");

  return 1;
}
