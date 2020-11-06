#ifndef ONCOLOGISTPACIENT_H
#define ONCOLOGISTPACIENT_H
#include "pacient.h"
#include <ostream>
#include <string>
class OncologistPacient:public Pacient{
  public:
    OncologistPacient(const std::string, const int, const std::string, const std::string);
    virtual std::string getParticularInfo() const;

  private:
    std::string tumorRegion;
};
#endif
