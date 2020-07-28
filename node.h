// @author Thad Shinno
#ifndef NODE_H
#define NODE_H

class Node {
  private:
    int _val;
    Node *_prev;
    Node *_next;

  public:
    Node(int);
    void setNext(Node*);
    void setPrev(Node*);
    Node* getNext();
    Node* getPrev();
    int getVal();
};

#endif
