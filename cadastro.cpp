#include "cadastro.h"
#include "binaryTree.h"

Cadastro::Cadastro(const BinaryTree<Pacient> & rootNode):tree(rootNode){};

BinaryTree<Pacient> &Cadastro::getRootNode(){
  return tree;
}
