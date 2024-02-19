#include "container.h"

class List: public Container{
  public:
    Node* head;
    int size;
    List(){
      head=NULL;
      size=0;
    }
    List(int v){
      this->add(v);

    }
    List(List& l){
      Node* temp=l.head;
      while(temp){
        add(temp->value);
        temp=temp->next;
      }
    }
    ~List(){
      Node* temp=head;
      while(temp){
        Node* temp2=temp;
        temp=temp->next;
        delete temp2;
      }


    }
    void add(int v){
      Node* n=new Node(v);
      if(head==NULL){
        head=n;
      }else{
        Node* temp=head;
        while(temp->next){
          temp=temp->next;
        }
        temp->next=n;
      }
      size++;
    }
    int pop(){
      if(head==NULL){
        throw runtime_error("List is empty");
      }
      Node* temp=head;
      head=head->next;
      int v=temp->value;
      delete temp;
      size--;
      return v;
    }

    bool operator==(const List& rhs){
      if (size!=rhs.size){
        return false;
      }
      Node* temp1=head;
      Node* temp2=rhs.head;
      while(temp1&&temp2){
        if(temp1->value!=temp2->value){
          return false;
        }
        temp1=temp1->next;
        temp2=temp2->next;
      }
      return true;
    }

    bool operator!=(const List& rhs){
      if (size!=rhs.size){
        return true;
      }
      Node* temp1=head;
      Node* temp2=rhs.head;
      while(temp1&&temp2){
        if(temp1->value!=temp2->value){
          return true;
        }
        temp1=temp1->next;
        temp2=temp2->next;
      }
      return false; 
      }
    friend ostream& operator<<(ostream& os, List& l);
};
ostream& operator<<(ostream& os, List& l){
  Node* temp=l.head;
  while(temp){
    os<<temp->value<<" ";
    temp=temp->next;
  }
  
    return os;
}
