#include <iostream>
#include <stdexcept> // For std::runtime_error
//#include "container.h"

using namespace std;

template <typename E> 
class Node {
public:
    E value;
    Node* next;
    Node(E v) : value(v), next(NULL) {} // Use NULL instead of nullptr in older C++
};

template <class T> 
class ArrayList {
public:
    Node<T>* head;
    int size;

    ArrayList() : head(NULL), size(0) {}

    //// Test case-6: copy constructor
        //cout<<"Running Test case-6:  \t\t try to run copy constructor"<<endl;
        //try{
            //person p1(10,"james");person p2(20,"mike");
            //person p3(30,"sarah");person p4(40,"sedra");
            //ArrayList<person> L1; L1.add(p1); L1.add(p2); L1.add(p3); L1.add(p4);
            //ArrayList<person>(L2);
            //if(L1==L2)
                //cout<<"Test case-6 run successfully.."<<endl;
            //else
                //throw runtime_error("Test case-6 Fail");
       // }catch(...){
            //cout<<"Test case-6 failed .......... unable to use copy constructor correctly"<<endl;
       // }

    // Copy constructor
    ArrayList(const ArrayList<T>& l) : head(NULL), size(0) {
        Node<T>* temp = l.head;
        while (temp) {
            this->add(temp->value); // Add elements from the original list to the new list.
            temp = temp->next;
        }
        

    }

    ~ArrayList() {
        Node<T>* temp = head;
        while (temp) {
            Node<T>* next = temp->next;
            delete temp;
            temp = next;
        }
    }

    void add(T v) {
        Node<T>* newNode = new Node<T>(v);
        if (!head) {
            head = newNode;
        } else {
            Node<T>* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        size++;
    }

    T pop() {
        if (!head) {
            throw runtime_error("List is empty");
        }
        if (head->next == NULL) { // Only one element
            T value = head->value;
            delete head;
            head = NULL;
            size--;
            return value;
        } else {
            Node<T>* prev = NULL;
            Node<T>* temp = head;
            while (temp->next != NULL) {
                prev = temp;
                temp = temp->next;
            }
            T value = temp->value;
            delete temp;
            prev->next = NULL;
            size--;
            return value;
        }
    }


    bool operator==(const ArrayList<T>& rhs) const {
        Node<T>* temp1 = head;
        Node<T>* temp2 = rhs.head;
        while (temp1 && temp2) {
            if (temp1->value != temp2->value) {
                return false;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return temp1 == NULL && temp2 == NULL;
    }

    bool operator!=(const ArrayList<T>& rhs) const {
        return !(*this == rhs);
    }
};

template <class E> 
ostream& operator<<(ostream& os, const ArrayList<E>& l) {
    Node<E>* temp = l.head;
    while (temp) {
        os << temp->value << " ";
        temp = temp->next;
    }
    return os;
}



