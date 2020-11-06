#ifndef PACIENT_H
#define PACIENT_H
#include <string>

class Pacient{
  public:
    Pacient(std::string, int, std::string);

    std::string getName() const;

    std::string getGender() const;
    int getAge() const;

    void setName(const std::string);
    void setGender(const std::string);
    void setAge(const int);

    bool operator<(const Pacient &);
    bool operator>(const Pacient &);
    bool operator==(const Pacient &);

  private:
    std::string name, gender;
    int age;
};

#endif
