#include "WrongCat.hpp"

WrongCat::WrongCat() {
  _type = "WrongCat";
  std::cout << "WrongCat " << " is created with default constructor!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal() {
  _type = other._type;
  std::cout << "WrongCat " << " is created with copy constructor!" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
  if(this != &other) {
    _type = "WrongCat";
  }
  std::cout << "WrongCat " << " is created with copy attribution constructor!" << std::endl;
  return (*this);
}

WrongCat::~WrongCat() {
  std::cout << "WrongCat " << " is destroyed!" << std::endl;
};

void WrongCat::makeSound() {
  std::cout << "WrongCat says MAS QUE BARBARIDADE, TCHÊ! VIU ALI OS CUSCO TUDO LAGARTEANDO DEPOIS DO ALMOÇO?" << std::endl;
}
