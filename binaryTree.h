#ifndef BINARYTREE_H
#define BINARYTREE_H
#include <iostream>
#include <iomanip>
#include <iostream>
#include <ostream>
#include "pacient.h"
template <class T>
class BinaryTree{
  public:
    BinaryTree(T *node = NULL, BinaryTree * leftPtr = NULL, BinaryTree * rightPtr = NULL):
      node(node),
      leftSonPtr(leftPtr),
      rightSonPtr(rightPtr){};

    ~BinaryTree(){
      delete leftSonPtr;
      delete rightSonPtr;
      delete node;
    }

    template<class O>
    friend std::ostream &operator<<(std::ostream&, const BinaryTree<O> &);

    BinaryTree *operator+=(T *);
    BinaryTree *operator()(const std::string);
    T *getNode();
    BinaryTree *getLeftSon(){return leftSonPtr;};
    BinaryTree *getRightSon(){return rightSonPtr;};


  private:
    BinaryTree * leftSonPtr;
    BinaryTree * rightSonPtr;
    T *node;
};
template<class T>
T *BinaryTree<T>::getNode(){
  return node;
}

template<class T>
BinaryTree<T> *BinaryTree<T>::operator+=(T *newNode){
  BinaryTree *ptr = NULL;
  if(node == NULL){
    node = newNode;
    ptr = this;
  }else{
    if (newNode->getName() == node->getName()){
      return NULL;
    }else if (newNode->getName() < node->getName()){
      if (rightSonPtr == NULL){
        rightSonPtr = new BinaryTree<T>(newNode);
        ptr = rightSonPtr;
      }else{
        ptr = (*rightSonPtr)+=newNode;
      }
    }else{
      if (leftSonPtr == NULL){
        leftSonPtr = new BinaryTree<T>(newNode);
        ptr = leftSonPtr;
      }else{
        ptr = (*leftSonPtr)+=newNode;
      }
    }
  }
  return ptr;
}

template<class T>
BinaryTree<T> *BinaryTree<T>::operator()(const std::string name){
  if (name < node->getName()){
    return rightSonPtr == NULL ? NULL : (*rightSonPtr)(name);
  }else if (name > node->getName()){
    return leftSonPtr == NULL ? NULL : (*leftSonPtr)(name);
  }
  return this;
}

template<class O>
std::ostream &operator<<(std::ostream &output, const BinaryTree<O> &n){
  //percorre árvore na ordem simetrica printando nos
  if (n.leftSonPtr != NULL){
    output<<(*n.leftSonPtr);
  }
  Pacient *ptr = n.node;
  output << (*ptr);
  if (n.rightSonPtr != NULL){
    output << (*n.rightSonPtr);
  }
  return output;
}

#endif
