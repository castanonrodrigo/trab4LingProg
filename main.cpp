#include <iostream>
#include "binaryTree.h"
using namespace std;
int main(){
  BinaryTree<int> rootNode(5);
  cout << rootNode.getNode() <<endl;
  cout << rootNode.getLeftSon() <<endl;
  BinaryTree<int> *filho1 = rootNode.addNode(3);
  BinaryTree<int> *filho2 = rootNode.addNode(4);
  BinaryTree<int> *filho3 = rootNode.addNode(7);
  BinaryTree<int> *filho4 = rootNode.addNode(2);
  /* BinaryTree<int> *filho1 = rootNode+=3; */
  /* BinaryTree<int> *filho2 = rootNode+=4; */
  /* BinaryTree<int> *filho3 = rootNode+=7; */
  /* cout << rootNode.getNode() << endl; */
  /* cout << (*rootNode.getLeftSon()).getNode()<<endl; */
  cout << rootNode.getRightSon()->getRightSon()->getNode()<<endl;
  return 1;
}
