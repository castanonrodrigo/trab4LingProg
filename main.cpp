#include <iostream>
#include "binaryTree.h"
#include "pacient.h"
using namespace std;
int main(){
  Pacient paciente1("Rodolfo", 50, "M");
  Pacient paciente2("Maria", 45, "F");
  Pacient paciente3("Maria", 45, "F");
  BinaryTree<Pacient> rootNode(paciente1);
  BinaryTree<Pacient> *test = rootNode+=paciente2;
  cout << rootNode.getRightSon()->getNode().getName()<<endl;
  return 1;
}
