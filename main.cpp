#include <iostream>
#include <string>

#include "Country.hpp"
#include "CountryList.hpp"
using namespace std;

int main(int argc, char **argv) {

  Country *c1 = new Country("Australia");
  Country *c2 = new Country("Sri Lanka");
  Country *c3 = new Country("Canada");
  Country *c4 = new Country("Trinidad");
  Country *c5 = new Country("Finland");
  Country *c6 = new Country("Tonga");
  Country *c7 = new Country("Iceland");

  CountryList *l1 = new CountryList();
  l1->add(c1);
  l1->add(c2);
  l1->add(c3);
  l1->add(c4);
  l1->print(); // Australia, ... Trinidad
  l1->removeFront();
  l1->print(); // Sri Lanka, ... Trinidad
  l1->removeEnd();
  l1->print(); // Sri ... Canada

  CountryList *l_alphabetical = new CountryList();
  l_alphabetical->add(c1);
  l_alphabetical->add(c3);
  l_alphabetical->add(c5);
  l_alphabetical->add(c7);
  l_alphabetical->add(c2);
  l_alphabetical->add(c6);
  l_alphabetical->add(c4);
  l_alphabetical->print();

  delete l1;
  delete l_alphabetical;

  return 0;
}
