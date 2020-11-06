#include "oncologistPacient.h"
#include <ostream>
#include <string>
#include <iostream>
using namespace std;

OncologistPacient::OncologistPacient(const string name, const int age, const string gender, const string tumorReg):
  Pacient(name, age, gender){
    tumorRegion = tumorReg; 
  }

std::string OncologistPacient::getParticularInfo()const{
  string s = "Regiao do tumor: " + tumorRegion;
  return s;
}
