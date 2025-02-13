#include <iostream>

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};
class LinkedList
{
public:
    Node *head;
    LinkedList()
    {
        this->head = nullptr;
    }
    void insert(int data)
    {
        Node *new_node = new Node(data);
        if (head == nullptr)
        {
            head = new_node;
        }
        else
        {
            Node *temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = new_node;
        }
    }
    void display()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout<<std::endl;
    }
    void removeNthFromEnd(int n)
    {
        Node *fast = head, *slow = head;
        for (int i = 0; i < n; i++)
        {
            std::cout<<i<<" :";
           std::cout<<fast->data<<" ";
            if (fast == nullptr) return; // n is greater than the length of the list
            fast = fast->next;
        }
        std::cout<<std::endl;
        if (fast == nullptr) return ; // n is equal to the length of the list
        while (fast->next != nullptr)
        {
            std::cout<<slow->data<<" ;";
            std::cout<<fast->data<<" ";
            fast = fast->next;
            slow = slow->next;
        }
        std::cout<<std::endl;
        Node *temp = slow->next;
        slow->next = slow->next->next;
        delete temp;
        return;
    }
    // void delete_n_from_last(int n){
    //    Node *temp=head;
    //    Node *temp1=head;
    //    int count=0;
    //    while(temp!=nullptr){
    //        count++;
    //        temp=temp->next;
    //    }
    //    temp=head;
    //    for(int i=0;i<count-n-1;i++){
    //        temp=temp->next;
    //    }
    // Node* temp2=temp->next;
    //   temp->next=temp->next->next;
    //   delete temp2;
    // }
    ~LinkedList()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            Node *next = temp->next;
            delete temp;
            temp = next;
        }
    }
};

int main()
{
    LinkedList ll;
    ll.insert(1);
    ll.insert(2);
    ll.insert(3);
    ll.insert(4);
    ll.insert(5);
    ll.insert(6);
    ll.insert(7);
    ll.insert(8);
    ll.insert(9);
    ll.insert(10);
    ll.display();
    std::cout << std::endl;
    ll.removeNthFromEnd(3);
    ll.display();
    std::cout << std::endl;
    // ll.delete_n_from_last(3);
    // ll.display();
    return 0;
}