#include "dw.h"

Animal::Animal(const std::string &name){m_name = name}

std::string Animal::get_name() const {
  return m_name;
}

Dog::Dog(const std::string &name, const std::string &breed) : Animal() {
  m_breed = breed;
}

std::string Dog::get_breed() {
  return m_breed;
