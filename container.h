#ifndef HEADER_H
#define HEADER_H
#include <iostream>
using namespace std;
class Node{
  public:
    int value;
    Node* next;
    Node(int v){
      value=v;
      next=NULL;
    }
};
class Container{
  public:
    Node* head;
    int size;
    Container(){
      head=NULL;
      size=0;
    }
};
#endif

