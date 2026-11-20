#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("") {
  std::cout << "WrongAnimal default constructor called." << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &other) : _type(other._type) {
  std::cout << "WrongAnimal copy constructor called." << std::endl;

}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
  std::cout << "WrongAnimal copy by attribution constructor called." << std::endl;

  if(this != &other) {

  }
  return (*this);
}

WrongAnimal::~WrongAnimal() {
  std::cout << "WrongAnimal destructor called." << std::endl;
}

void WrongAnimal::makeSound() {
  std::cout << "[WrongAnimal sound]" << std::endl;
}
