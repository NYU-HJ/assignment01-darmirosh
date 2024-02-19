#include <iostream>
#include <stdexcept> // For std::runtime_error
#include "container.h"

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

    // Copy constructor
    ArrayList(const ArrayList<T>& l) : head(NULL), size(0) {
        Node<T>* temp = l.head;
        Node<T>* last = NULL;
        while (temp) {
            Node<T>* newNode = new Node<T>(temp->value);
            if (!last) {
                head = newNode;
            } else {
                last->next = newNode;
            }
            last = newNode;
            temp = temp->next;
            size++;
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
        Node<T>* temp = head;
        T value = temp->value;
        head = head->next;
        delete temp;
        size--;
        return value;
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



