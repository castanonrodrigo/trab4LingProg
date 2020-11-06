#ifndef BINARYTREE_H
#define BINARYTREE_H
#include <iostream>
#include <iomanip>
#include "pacient.h"
using namespace std;
template <class T>
class BinaryTree{
  public:
    BinaryTree(T &node, BinaryTree * leftPtr = NULL, BinaryTree * rightPtr = NULL):node(node),leftSonPtr(leftPtr),rightSonPtr(rightPtr){};
    ~BinaryTree(){
      delete leftSonPtr;
      delete rightSonPtr;
    }
    BinaryTree *operator+=(T &);
    T &getNode();
    BinaryTree *getLeftSon(){return leftSonPtr;};
    BinaryTree *getRightSon(){return rightSonPtr;};


  private:
    BinaryTree * leftSonPtr;
    BinaryTree * rightSonPtr;
    T node;
};
template<class T>
T &BinaryTree<T>::getNode(){
  return node;
}

template<class T>
BinaryTree<T> *BinaryTree<T>::operator+=(T &newNode){
  if (newNode.getName() == node.getName()){
    return NULL;
  }else if (newNode.getName() < node.getName()){
    if (rightSonPtr == NULL){
      rightSonPtr = new BinaryTree<T>(newNode);
      return rightSonPtr;
    }else{
      (*rightSonPtr)+=newNode;
    }
  }else{
    if (leftSonPtr == NULL){
      leftSonPtr = new BinaryTree<T>(newNode);
      return rightSonPtr;
    }else{
      (*leftSonPtr)+=newNode;
    }
  }
  return NULL;
}
#endif
