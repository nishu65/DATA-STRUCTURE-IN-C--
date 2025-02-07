#include <iostream>
using namespace std;

class linked
{
private:
    struct node
    {
        int data;
        node *next;
    };
    node *head;

public:
    linked()
    {
        head = nullptr;
    }

    void insert(int data)
    {
        if (head == nullptr)
        {
            head = new node();
            head->data = data;
            head->next = nullptr;
        }
        else
        {   
            node *temp=head;
            while (temp->next!= nullptr)
            {
                temp = temp->next;
            }
           node *newnode = new node();
            temp->next =newnode ;
            newnode->data = data;
            newnode->next = nullptr;
        }
    }
    void display()
    {
        node *temp = head;
        while (temp!= nullptr)
        {
            cout << temp->data << " ->";
            temp = temp->next;
        }
    }
    ~linked()
    {
        node *temp = head;
        while (temp != nullptr)
        {
            node *next = temp->next;
            delete temp;
            temp = next;
        }
    }
};
int main()
{
    linked l;
    l.insert(10);
    l.insert(20);
    l.insert(30);
    l.insert(40);
    l.display();

    return 0;
}