#include "CountryList.hpp"

#include <iostream>
#include "Country.hpp"
#include "Node.hpp"
using namespace std;

void CountryList::add(Country *in) {

  Node *n = new Node(in);

  if (this->head == 0) {
    this->head = n;
    this->tail = this->head;
  } else {
    this->tail->setNext(n);
    this->tail->getNext()->setPrevious(tail);
    this->tail = n;
  }
  this->count++;

}

void CountryList::print() const {

  Node *n = this->head;

  if (n == 0) return;

  cout << n->getValue()->getName();
  while (n->getNext() != 0) {
    cout << ", " << n->getNext()->getValue()->getName();
    n = n->getNext();
  }
  cout << endl;

}

void CountryList::removeFront() {

  if (this->size() == 0) return;
  if (this->size() == 1) {
    delete this->head;
    this->head = 0;
    this->tail = this->head;
    this->count--;
    return;
  }

  Node *n = this->head;
  this->head = n->getNext();
  this->head->setPrevious(0);
  this->count--;
  delete n;

}

void CountryList::removeEnd() {

  if (this->size() == 0) return;
  if (this->size() == 1) {
    delete this->tail;
    this->head = 0;
    this->tail = this->head;
    this->count--;
    return;
  }

  this->tail = this->tail->getPrevious();
  delete this->tail->getNext();
  this->tail->setNext(0);

//  Node *n = this->head;
//  while (n->getNext()->getNext() != 0) n = n->getNext();
//
//  this->tail = n;
//  delete this->tail->getNext();
//  this->tail->setNext(0);
  this->count--;

}

CountryList::CountryList() : head(0), tail(0), count(0) { }

CountryList::~CountryList() {
cout << "Entered CountryList destructor..." << endl; //debugging
int ii = 0; // this variable is simply used for debugging
  while (this->size() > 0) {
ii++;
    this->removeEnd();
  }
cout << "Leaving CountryList destructor after invoking removeEnd() " << ii << " times" << endl; //debugging
}
