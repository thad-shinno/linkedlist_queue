#include <iostream>
#include "node.h"
#include "queue.h"
using std::cout;
using std::endl;

Queue::Queue() {
  _size = 0;
}

// add to back of queue
void Queue::add(int val) {
  Node *n = new Node(val);
  // if queue is empty, put it on front which is same as back
  if (_size == 0) {
    _front = n;
    _back = n;
    // double link
    _front->setNext(_back);
    _back->setPrev(_front);
  }  
  // else put it in the back
  else {
    n->setPrev(_back);
    _back->setNext(n);
    _back = n;
  }
  _size++;
}

// remove front of queue
int Queue::remove() {
  // can't remove from an empty list
  if (_size == 0) {
    throw "Queue is Empty";
  }
 
  //save front
  int val = _front->getVal();
  // remove front
  _front = _front->getNext();
  _size--;
  return val;
}

// return, but don't remove, front of queue
int Queue::peek() {
  // can't peek at an empty list
  if (_size == 0) {
    throw "Queue is Empty";
  }
 
  return _front->getVal();
}

// just return size
int Queue::size() {
  return _size;
}

// print every item in the queue
void Queue::print() {
  Node *curr = _front;
  for (int i = 0; i < _size; i++) {
    cout << curr->getVal() << " ";
    curr = curr->getNext();
  }
  cout << endl;
}
