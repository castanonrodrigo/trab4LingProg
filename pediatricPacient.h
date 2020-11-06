#ifndef PEDIATRICPACIENT_H
#define PEDIATRICPACIENT_H
#include "pacient.h"
#include <ostream>
#include <string>
class PediatricPacient:public Pacient{
  public:
    PediatricPacient(const std::string, const int, const std::string, const std::string);
    virtual std::string getParticularInfo() const;

  private:
    std::string parentName;
};
#endif
