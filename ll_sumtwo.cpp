#include <iostream>

struct Node {
    int data;
    Node* next;
};

class LinkedList {
public:
    LinkedList() : head(nullptr) {}

    void insert(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;
        if (head == nullptr) {
            head = newNode;
            return;
        }
        else{
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        }
        std::cout << "nullptr" << std::endl;
    }

    //int sum() {
    //    int total = 0;
    //    Node* temp = head;
    //    while (temp != nullptr) {
    //        total += temp->data;
    //        temp = temp->next;
    //    }
    //    return total;
    
friend void sum(LinkedList l1,LinkedList l2);
private:
    Node* head;
};
void sum(LinkedList l1,LinkedList l2){
    Node* temp1 = l1.LinkedList::head;
    Node* temp2 = l2.LinkedList::head;
    int carry = 0;
    LinkedList l3;
    while (temp1 != nullptr && temp2 != nullptr) {
        int sum = temp1->data + temp2->data + carry;
        carry = sum / 10;
        sum = sum % 10;
        l3.insert(sum);
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    while (temp1 != nullptr) {
        int sum = temp1->data + carry;
        carry = sum / 10;
        sum = sum % 10;
        l3.insert(sum);
        temp1 = temp1->next;
    }
    while (temp2 != nullptr) {
        int sum = temp2->data + carry;
        carry = sum / 10;
        sum = sum % 10;
        l3.insert(sum);
        temp2 = temp2->next;
    }
    if (carry != 0) {
        l3.insert(carry);
    }
    l3.display();
}
int main() {
    LinkedList list, list2;
    list.insert(5);
    list.insert(6);
    list.insert(3);
    list2.insert(2);
    list2.insert(8);
    list2.insert(2);
    sum(list,list2);

    //std::cout << "Linked List: ";
    //list.display();
//
    //std::cout << "Sum of elements: " << list.sum() << std::endl;

    return 0;
}