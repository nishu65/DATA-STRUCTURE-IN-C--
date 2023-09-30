#include <iostream>
#include <string>
#include <new>
using namespace std;
class node
{
    public:
    int data;
    node*link;

public:
    node(){
    data = 0;
    link = NULL;
    }
    node(int data){
        this->data=data;
        this->link=NULL;
    }
};
class ll{
    node * head;
    public:
    ll(){
        head=NULL;
    }
void insert(int);
void display ();
};
void ll::insert(int data)
{
     node * newnode=new node(data);
     if (head==NULL){
        head=newnode;
        return;
     }
     node * temp =head;
     while (temp->link!=NULL){
        temp=temp->link;

     }
     temp->link=newnode;
}
void ll::display(){
    node *temp=head;
    if (head==NULL){
        cout<<"EMPTY LIST ";
        return;
    }
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->link;
    }
   

}

int main()
{
    ll list;
    list.insert(5);
    list.insert (7);
    list.insert(8);
    list.display();


    // node data=50;
}