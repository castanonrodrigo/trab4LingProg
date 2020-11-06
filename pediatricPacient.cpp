#include "pediatricPacient.h"
#include "pacient.h"
#include <string>

using namespace std;

PediatricPacient::PediatricPacient(const string name, const int age, const string gender, const string parent):
  Pacient(name, age,gender){
    parentName = parent;
  }

std::string PediatricPacient::getParticularInfo()const{
  string s = "Nome do responsavel: " + parentName;
  return s;
}
