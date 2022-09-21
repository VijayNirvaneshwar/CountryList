#ifndef COUNTRYLIST_HPP_
#define COUNTRYLIST_HPP_

class Node;
class Country;

class CountryList {
public:
  void print() const;
  void add(Country *in); // done
  void removeFront(); // done
  void removeEnd(); // done
  int size() const { return this->count; }
  CountryList();
  virtual ~CountryList();

private:
  Node *head;
  Node *tail;
  int count;
};

#endif /* COUNTRYLIST_HPP_ */
