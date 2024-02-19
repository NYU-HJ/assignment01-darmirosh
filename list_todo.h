#include <iostream>
#include <stdexcept> // For std::runtime_error
#include "container.h"


using namespace std;


class List : public Container {
public:
    Node* head;
    int size;

    List() : head(NULL), size(0) {}

    List(int v) : List() {
        this->add(v);
    }

   List(const List& l) : List() {
    Node* temp = l.head;
    while (temp != nullptr) {
        this->add(temp->value); // Add elements from the original list to the new list.
        temp = temp->next;
    }

}

    ~List() {
        Node* temp;
        while (head) {
            temp = head;
            head = head->next;
            delete temp;
        }
        size = 0;
    }

    void add(int v) {
        Node* n = new Node(v);
        if (!head) {
            head = n;
        } else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = n;
        }
        size++;
    }

    int pop() {
        if (!head) {
            throw std::runtime_error("List is empty");
        }
        if (head->next == NULL) {
            int v = head->value;
            delete head;
            head = NULL;
            size--;
            return v;
        } else {
            Node* temp = head;
            while (temp->next->next) {
                temp = temp->next;
            }
            int v = temp->next->value;
            delete temp->next;
            temp->next = NULL;
            size--;
            return v;
        }
    }

    bool operator==(const List& rhs) {
        if (size != rhs.size) {
            return false;
        }
        Node* temp1 = head;
        Node* temp2 = rhs.head;
        while (temp1 && temp2) {
            if (temp1->value != temp2->value) {
                return false;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return true;
    }

    bool operator!=(const List& rhs) {
        if (size != rhs.size) {
            return true;
        }
        Node* temp1 = head;
        Node* temp2 = rhs.head;
        while (temp1 && temp2) {
            if (temp1->value != temp2->value) {
                return true;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return false;
    }

    friend ostream& operator<<(ostream& os, List& l);
};

ostream& operator<<(ostream& os, List& l) {
    Node* temp = l.head;
    while (temp) {
        os << temp->value << " ";
        temp = temp->next;
    }
    return os;
}

