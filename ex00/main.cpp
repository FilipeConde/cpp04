#include <iostream>
#include "Animal.hpp"

int main(){

  Animal a;
  Animal b(a);

  a.makeSound();
  b.makeSound();

  return (0);
}
