#include "pacient.h"
#include <string>

using namespace std;

Pacient::Pacient(string name, int age, string gender):name(name),age(age),gender(gender){};

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
