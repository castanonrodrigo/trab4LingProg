#ifndef CADASTRO_H
#define CADASTRO_H
#include "binaryTree.h"
#include "pacient.h"
#include <exception>
class PacientAlreadyExistsException : public std::exception{
  virtual const char *what() const throw()
  {
    return "Paciente ja cadastrado.";
  }
};
class PacientNotFoundException : public std::exception{
  virtual const char *what() const throw()
  {
    return "Paciente nao encontrado.";
  }
};

class Cadastro{
  public:
    Cadastro(const BinaryTree<Pacient> &);
    void addPacient(Pacient &) throw(std::exception);
    void findPacient(const std::string) throw(std::exception);
    void listPacients() const;
    BinaryTree<Pacient> &getRootNode();
  private:
    BinaryTree<Pacient> tree;
};
#endif
