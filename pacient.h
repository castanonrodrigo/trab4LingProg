#ifndef PACIENT_H
#define PACIENT_H
#include <string>
#include <ostream>

class Pacient{
  friend std::ostream &operator<<(std::ostream&, const Pacient &);
  public:
    Pacient(const std::string, const int, const std::string);

    std::string getName() const;

    std::string getGender() const;
    int getAge() const;

    void setName(const std::string);
    void setGender(const std::string);
    void setAge(const int);
    virtual std::string getParticularInfo() const = 0;

    bool operator<(const Pacient &);
    bool operator>(const Pacient &);
    bool operator==(const Pacient &);

  private:
    std::string name, gender;
    int age;
};

#endif
