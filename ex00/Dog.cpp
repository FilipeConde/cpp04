#include "Dog.hpp"

  Dog::Dog() {
    _type = "Dog";
    std::cout << "Dog " << " is created with default constructor!" << std::endl;
  }

  Dog::Dog(const Dog &other) : Animal() {
    _type = other._type;
    std::cout << "Dog " << " is created with copy constructor!" << std::endl;
}

  Dog &Dog::operator=(const Dog &other) {
    if(this != &other) {
      _type = "Dog";
    }
    std::cout << "Dog " << " is created with copy attribution constructor!" << std::endl;
    return (*this);
  }

  Dog::~Dog() {
    std::cout << "Dog " << " is destroyed!" << std::endl;
};

  void Dog::makeSound() {
    std::cout << "Dog says woof woof!" << std::endl;
  }
