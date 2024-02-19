#include "container.h"
#include <vector>
using namespace std;



class Stack : public Container {
public:
    Node* head;
    int size;
    Stack() {
        head = NULL;
        size = 0;
    }
    Stack(int v) {
        this->push(v);
    }
    Stack(const Stack& l) {
    head = NULL;
    size = 0;

    // Use a vector to reverse the order of elements because the stack is LIFO.
    std::vector<int> temp;
    Node* current = l.head;
    while (current != NULL) {
        temp.push_back(current->value);
        current = current->next;
    }

    // Now push elements onto the new stack in reverse order to maintain the original order.
    for (int i = temp.size() - 1; i >= 0; i--) {
        this->push(temp[i]);
    }
}
    ~Stack() {
        Node* temp = head;
        while (temp) {
            Node* temp2 = temp;
            temp = temp->next;
            delete temp2;
        }
    }
    void push(int v) {
        Node* n = new Node(v);
        if (head == NULL) {
            head = n;
        } else {
            n->next = head;
            head = n;
        }
        size++;
    }
    int pop() {
        if (head == NULL) {
            throw std::runtime_error("Stack is empty");
        }
        Node* temp = head;
        head = head->next;
        int v = temp->value;
        delete temp;
        size--;
        return v;
    }

    bool operator==(const Stack& rhs) {
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

    bool operator!=(const Stack& rhs) {
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
    friend ostream& operator<<(ostream& os, Stack& l);
};
ostream& operator<<(ostream& os, Stack& l) {
    Node* temp = l.head;
    while (temp) {
        os << temp->value << " ";
        temp = temp->next;
    }

    return os;
}

