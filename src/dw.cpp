#include "dw.h"

Animal::Animal(const std::string &name){name_ = name}

std::string Animal::get_name() const {
  return name_;
}

Dog::Dog(const std::string &name, const std::string &breed) : Animal() {
  breed_ = breed;
}

std::string Dog::get_breed() {
  return breed_;
