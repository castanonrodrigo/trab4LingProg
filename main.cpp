#include <exception>
#include <iostream>
#include "pacient.h"
#include "binaryTree.h"
#include "cadastro.h"
#include "oncologistPacient.h"
using namespace std;
int main(){
  /* Pacient paciente1("Rodolfo", 50, "M"); */
  /* Pacient paciente2("Maria", 45, "F"); */
  /* Pacient paciente3("Maria", 45, "F"); */
  /* Pacient paciente4("Zeus", 50, "M"); */
  /* Pacient paciente5("Saulo", 50, "M"); */
  /* Pacient paciente6("Zzzz", 50, "M"); */
  /* Pacient paciente7("Teste", 50, "M"); */
  OncologistPacient oncologia1("Marcos", 34, "M", "perna");
  OncologistPacient oncologia2("Maria", 34, "M", "perna");
  BinaryTree<Pacient> rootNode(oncologia1);
  Cadastro cad(rootNode);
  cad.addPacient(oncologia2);
  try{
    cad.addPacient(oncologia1);
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
