#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class ICharacter;

class AMateria {
protected:
  std::string _type;

public:
  AMateria();
  AMateria(const std::string &type);
  AMateria(const AMateria &src);
  AMateria &operator=(const AMateria &rhs);
  virtual ~AMateria();

  std::string const &getType() const;
  virtual AMateria *clone() const = 0;
  virtual void use(ICharacter &target);
};

#endif
