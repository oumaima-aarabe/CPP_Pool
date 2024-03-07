#include "Warlock.hpp"

Warlock::Warlock(std::string _name, std::string _title)
{
    name = _name;
    title = _title;
    std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(){}

Warlock::~Warlock()
{
    std::cout << this->name << ": My job here is done!" << std::endl;

}
const std::string& Warlock::getName() const {
    return(name);
}


const std::string& Warlock::getTitle() const {
    return(title);
}

void Warlock::setName(const std::string &n)
{
    name = n;
}

void Warlock::setTitle(const std::string &t)
{
    title = t;
}

void Warlock::introduce() const{
    std::cout << "I am " << this->name << ", " << this->title <<std::endl;

}


int main()
{
  Warlock const richard("Richard", "Mistress of Magma");
  richard.introduce();
  std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

  Warlock* jack = new Warlock("Jack", "the Long");
  jack->introduce();
  jack->setTitle("the Mighty");
  jack->introduce();

  delete jack;

  return (0);
}