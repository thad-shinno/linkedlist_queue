// @author Thad Shinno
#include "node.h"

// double linked list has a value, a next node, and previous node

Node::Node(int val) {
  _val = val;
}

void Node::setNext(Node *next) {
  _next = next;
}

void Node::setPrev(Node *prev) {
  _prev = prev;
}

Node* Node::getNext() {
  return _next;
}

Node* Node::getPrev() {
  return _prev;
}

int Node::getVal() {
  return _val;
}

