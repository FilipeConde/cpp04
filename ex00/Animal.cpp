#include "Animal.hpp"

Animal::Animal() : _type("") {
  std::cout << "Animal default constructor called." << std::endl;
}
Animal::Animal(const Animal &other) : _type(other._type) {
  std::cout << "Animal copy constructor called." << std::endl;

}
Animal &Animal::operator=(const Animal &other) {
  std::cout << "Animal copy by attribution constructor called." << std::endl;

  if(this != &other) {

  }
  return (*this);
}

Animal::~Animal() {
  std::cout << "Animal destructor called." << std::endl;
}

void Animal::makeSound() {
  std::cout << "[Animal sound]" << std::endl;
}
