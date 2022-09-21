#ifndef NODE_HPP_
#define NODE_HPP_

class Country;

class Node {
public:
  Node * getNext() const;
  void setNext(Node *in) { this->next = in; }
  Country * getValue() const { return this->value; }
  Node();
  Node(Country *in);
  virtual ~Node();

private:
  Node *next;
  Country *value;
};

#endif /* NODE_HPP_ */
