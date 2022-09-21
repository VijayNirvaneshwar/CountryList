#ifndef COUNTRY_HPP_
#define COUNTRY_HPP_

#include <string>

class Country {
public:
  std::string getName() const { return this->name; }
  void setName(std::string in) { this->name = in; }
  Country();
  Country(std::string name_in);
  virtual ~Country();

private:
  std::string name;
};

#endif /* COUNTRY_HPP_ */
