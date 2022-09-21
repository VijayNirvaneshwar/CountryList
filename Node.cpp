#include "Node.hpp"

// Uncomment the following 4 lines to implement the delay
//#include <chrono>
//#include <thread>
//using namespace std::this_thread; // sleep_for
//using namespace std::chrono; // milliseconds

Node::Node() : next(0), value(0) { }
Node::Node(Country *in) : next(0), value(in) { }
Node::~Node() { }

Node * Node::getNext() const {

// Uncomment the following line to implement the delay
  //sleep_for(milliseconds(200));

  return this->next;
}
