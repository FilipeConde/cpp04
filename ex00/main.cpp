#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"

int main(){

  Animal a;
  Animal b(a);

  a.makeSound();
  b.makeSound();

  Cat c;

  c.makeSound();

  return (0);
}
