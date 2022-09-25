#ifndef NODE_HPP_
#define NODE_HPP_

class Country;

class Node {
public:
  Node * getNext() const;
  Node* getPrevious() const;
  void setNext(Node *in) { this->next = in; }
  void setPrevious(Node *in) { this->previous = in; }
  Country * getValue() const { return this->value; }
  Node();
  Node(Country *in);
  virtual ~Node();

private:
  Node *next;
  Node *previous;
  Country *value;
};

#endif /* NODE_HPP_ */
