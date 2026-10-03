#ifndef DW_H
#define DW_H

#include <string>

class Animal {
public:
  Animal(const std::string &name);
  std::string get_name() const;

protected:
  std::string name_;
};

class Dog : public Animal {
public:
  Dog(const std::string &name, const std::string &breed);
  std::string get_breed() const;

private:
  std::string breed_;
};

#endif
