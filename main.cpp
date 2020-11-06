#include <iostream>
#include "binaryTree.h"
#include "pacient.h"
using namespace std;
int main(){
  Pacient paciente1("Rodolfo", 50, "M");
  Pacient paciente2("Maria", 45, "F");
  Pacient paciente3("Maria", 45, "F");
  Pacient paciente4("Zeus", 50, "M");
  Pacient paciente5("Saulo", 50, "M");
  Pacient paciente6("Zzzz", 50, "M");
  BinaryTree<Pacient> rootNode(paciente1);
  BinaryTree<Pacient> *maria = rootNode+=paciente2;
  cout<<"pointer retornado: "<<maria->getNode().getName()<<endl;
  BinaryTree<Pacient> *zeus = rootNode+=paciente4;
  cout<<"pointer retornado: "<<zeus->getNode().getName()<<endl;
  BinaryTree<Pacient> *zzz = rootNode+=paciente6;
  cout<<"pointer retornado: "<<zzz->getNode().getName()<<endl;
  BinaryTree<Pacient> *teste = rootNode("Zeus");

  cout <<teste<<endl;
  cout << teste->getNode().getName()<<endl;
  /* cout << ptr->getNode().getName()<<endl; */
  /* cout << rootNode.getLeftSon()->getNode().getName()<<endl; */

  return 1;
}
