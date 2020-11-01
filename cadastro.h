#ifndef CADASTRO_H
#define CADASTRO_H
#include "binaryTree.h"
#include "pacient.h"
#include <exception>
using namespace std;
class Cadastro{
  public:
    Cadastro(const BinaryTree<Pacient> &);
    void addPacient(const Pacient &) throw(exception);
    void removePacient(const Pacient &) throw(exception);
    BinaryTree<Pacient> &getRootNode();
  private:
    BinaryTree<Pacient> tree;
};
#endif
