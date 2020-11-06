#include "cadastro.h"
#include "binaryTree.h"
#include <exception>
#include <iostream>

using namespace std;
Cadastro::Cadastro(const BinaryTree<Pacient> & rootNode):tree(rootNode){};

BinaryTree<Pacient> &Cadastro::getRootNode(){
  return tree;
}

void Cadastro::addPacient(Pacient &pacient) throw(exception){
  BinaryTree<Pacient> *ptr = tree+=pacient;
  if (ptr == NULL){
    throw PacientAlreadyExistsException();
  }
}
void Cadastro::findPacient(const std::string name) throw(exception){
  BinaryTree<Pacient> *ptr = tree(name);
  if (ptr == NULL){
    throw PacientNotFoundException();
  }else{
    cout << "PACIENTE ENCONTRADO:"<<endl;
    cout << ptr->getNode()<<endl;
  }
}

void Cadastro::listPacients()const{
  cout<<tree;
}
