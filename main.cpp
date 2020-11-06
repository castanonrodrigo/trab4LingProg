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

  OncologistPacient *root = new OncologistPacient("Marcos", 34, "M", "coxa");
  OncologistPacient oncologia1("Marcos", 34, "M", "perna");
  OncologistPacient oncologia2("Maria", 34, "M", "perna");
  OncologistPacient oncologia3("Tadeu", 50, "M", "femur");
  OncologistPacient oncologia4("Ananda", 50, "M", "femur");
  BinaryTree<Pacient> rootNode(root);
  Cadastro cad(&rootNode);
  cad.addPacient(&oncologia4);
  cad.addPacient(&oncologia2);
  try{
  cad.addPacient(&oncologia1);
  }catch(exception &e){
    cout<<e.what()<<endl;
  }
  cad.listPacients();

  return 1;
}
