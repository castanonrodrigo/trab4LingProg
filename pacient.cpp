#include "pacient.h"
#include <string>
#include <iostream>

using namespace std;

Pacient::Pacient(const string name, const int age, const string gender):name(name),gender(gender),age(age){};

ostream &operator<<(ostream &output, const Pacient  &pacient){
  output << "Nome: "<<pacient.name<<endl
    <<"Idade: "<<pacient.age<<endl
    <<"Genero: "<<pacient.gender<<endl
    <<pacient.getParticularInfo()<<endl<<endl;
  return output;
};

string Pacient::getName()const{return name;};
string Pacient::getGender()const{return gender;};
int Pacient::getAge()const{return age;};

void Pacient::setName(const string n){name = n;};
void Pacient::setGender(const string g){gender = g;};
void Pacient::setAge(const int a){age = a;};

bool Pacient::operator<(const Pacient & comp){
  if (name < comp.getName()){
    return true;
  }else{
    return false;
  }
}
bool Pacient::operator>(const Pacient & comp){
  if (name > comp.getName()){
    return true;
  }else{
    return false;
  }
}
bool Pacient::operator==(const Pacient & comp){
  if (name == comp.getName()){
    return true;
  }else{
    return false;
  }
}

/* string Pacient::getParticularInfo()const{ */
/*   return "nothing"; */
/* } */
