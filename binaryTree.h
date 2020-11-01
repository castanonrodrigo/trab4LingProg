#ifndef BINARYTREE_H
#define BINARYTREE_H
#include <iostream>
#include <iomanip>
using namespace std;
template <class T>
class BinaryTree{
  public:
    BinaryTree(T node, BinaryTree * leftPtr = NULL, BinaryTree * rightPtr = NULL):node(node),leftSonPtr(leftPtr),rightSonPtr(rightPtr){};
    ~BinaryTree(){
      delete leftSonPtr;
      delete rightSonPtr;
    }
    /* BinaryTree *operator+=(const T ); */
    BinaryTree *addNode(T);
    T getNode() const;
    BinaryTree *getLeftSon(){return leftSonPtr;};
    BinaryTree *getRightSon(){return rightSonPtr;};


  private:
    BinaryTree * leftSonPtr;
    BinaryTree * rightSonPtr;
    T node;
};
template<class T>
T BinaryTree<T>::getNode() const{
  return node;
}
template<class T>
BinaryTree<T> * BinaryTree<T>::addNode(T newNode){
  if (newNode == node){
    return NULL;
  }else if (newNode < node){
    if (rightSonPtr == NULL){
      rightSonPtr = new BinaryTree<T>(newNode);
      return rightSonPtr;
    }else{
      rightSonPtr->addNode(newNode);
    }
  }else{
    if (leftSonPtr == NULL){
      leftSonPtr = new BinaryTree<T>(newNode);
      return rightSonPtr;
    }else{
      leftSonPtr->addNode(newNode);
    }
  }
  return NULL;
}


/* template<class T> */
/* BinaryTree<T> *BinaryTree<T>::operator+=(const T newNode){ */
/*   if (newNode == node){ */
/*     return NULL; */
  /* }else if (newNode < node){ */
  /*   if (node.rightSonPtr == NULL){ */
  /*     node.rightSonPtr = new BinaryTree<T>(newNode); */
  /*     return node.rightSonPtr; */
  /*   } */
/*   }else{ */
/*     if (node.leftSonPtr == NULL){ */
/*       node.leftSonPtr = new BinaryTree<T>(newNode); */
/*       return node.leftSonPtr; */
/*   } */
/* } */
#endif
