#include "Cat.hpp"

  Cat::Cat() {
    _type = "Cat";
    std::cout << "Cat " << " is created with default constructor!" << std::endl;
  }

  Cat::Cat(const Cat &other) : Animal() {
    _type = other._type;
    std::cout << "Cat " << " is created with copy constructor!" << std::endl;
}

  Cat &Cat::operator=(const Cat &other) {
    if(this != &other) {
      _type = "Cat";
    }
    std::cout << "Cat " << " is created with copy attribution constructor!" << std::endl;
    return (*this);
  }

  Cat::~Cat() {
    std::cout << "Cat " << " is destroyed!" << std::endl;
};

  void Cat::makeSound() {
    std::cout << "Cat says meowth meowth!" << std::endl;
  }
