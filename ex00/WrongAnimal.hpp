#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
# include <string>
class WrongAnimal {
  
  public:
  WrongAnimal();
  WrongAnimal(const WrongAnimal &other);
  WrongAnimal &operator=(const WrongAnimal &other);
  virtual ~WrongAnimal();

    void makeSound();
  
  protected:
    std::string _type;
};

#endif