#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main(){

  Animal a;
  Animal b(a);

  a.makeSound();
  b.makeSound();

  Cat c;
  Dog d;

  c.makeSound();
  d.makeSound();

  WrongCat tche;
  tche.makeSound();

  return (0);
}
