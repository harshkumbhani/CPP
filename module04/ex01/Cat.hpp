#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
  Brain *_brain;

public:
  Cat();
  Cat(const Cat &src);
  Cat &operator=(const Cat &rhs);
  virtual ~Cat();

  virtual void makeSound(void) const;
  std::string getIdea(int index) const;
  void setIdea(int index, const std::string &idea);
  void  printIdeas(void) const;
};

#endif
