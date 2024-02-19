#include <iostream>
#include <stdexcept>

using namespace std;

template <typename E> 
class Node {
public:
    E value;
    Node* next;
    Node(E v) : value(v), next(nullptr) {}
};

template <class T> 
class ArrayList{
  public:
    Node<T>* head;
    int size;
    ArrayList(){
        head=NULL;
        size=0;
    }
    ArrayList(const ArrayList<T>& l) : head(nullptr), size(0) {
        Node<T>* current = l.head;
        Node<T>* last = nullptr;
        while (current != nullptr) {
            Node<T>* newNode = new Node<T>(current->value);
            if (last == nullptr) {
                head = newNode;
            } else {
                last->next = newNode;
            }
            last = newNode;
            current = current->next;
        }
        size = l.size;

    }

    ~ArrayList() {
    Node<T>* current = head;
    while (current != nullptr) {
        Node<T>* nextNode = current->next;
        delete current;
        current = nextNode;
    }
    head = nullptr; 
    size = 0;

    }
    void add(T v){
       Node<T>* n=new Node<T>(v);
        if(head==NULL){
            head=n;
        }else{
            Node<T>* temp=head;
            while(temp->next){
                temp=temp->next;
            }
            temp->next=n;
        }
        size++;

    }
    T pop(){
        if(head==NULL)
            throw runtime_error("List is empty");
        Node<T>* temp=head;
        head=head->next;
        T v=temp->value;
        delete temp;
        size--;
        return v;
    }

    bool operator==(const ArrayList<T>& rhs){
      Node<T>* temp1=head;
      Node<T>* temp2=rhs.head;
      while(temp1&&temp2){
          if(temp1->value!=temp2->value)
              return 0;
          temp1=temp1->next;
          temp2=temp2->next;
      }
      return (temp1==NULL)&&(temp2==NULL);
    }

    bool operator!=(const ArrayList<T>& rhs){
      return !(*this==rhs);
      return 0;
    }
    template <class E> 
    friend ostream& operator<<(ostream& os, ArrayList<E>& l);
};
template <class E> 
ostream& operator<<(ostream& os, ArrayList<E>& l){
    Node<E>* temp=l.head;
    while(temp){
        os<<temp->value<<" ";
        temp=temp->next;
    } 
    return os;
}