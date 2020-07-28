// @author Thad Shinno
#ifndef QUEUE_H
#define QUEUE_H
#include "node.h"

class Queue {
  private:
    int _size;
    Node *_front;
    Node *_back;

  public:
    Queue();
    void add(int);
    int remove();
    int peek();
    int size();
    void print();
};

#endif
