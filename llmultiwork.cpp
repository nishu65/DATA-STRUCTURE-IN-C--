#include<iostream>
using namespace std;
class linked_list{
    private:
    struct node{
        int data;
        node* next;

    };
    node * head = nullptr;
    public:
    linked_list(){
        head=nullptr;
    }
    void insert(int data){
        if(head==nullptr){
            head=new node();
            head->data=data;
            head->next=nullptr;
        }
        else{
            node * temp=head;
            while(temp->next!=nullptr){
                temp=temp->next;
            }
            node * newnode=new node();
            temp->next=newnode;
            newnode->data=data;
            newnode->next=nullptr;
        }
    }
    void display(){
        node * temp=head;
        while(temp!=nullptr){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
    }
    void insert_at_beginning(int data){
        node*newnode=new node;
        newnode->data=data;
        newnode->next=head;
        head=newnode;
    }
    void insert_at(int data,int position){
        node*newnode=new node;
        newnode->data=data;
        node*temp=head;
        for(int i=0;i<position-1;i++){
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
    void delete_at_beginning(){
        node*temp=head;
        head=head->next;
        delete temp;
    }
    void delete_at(int position){
        node*temp=head;
        for(int i=0;i<position-1;i++){
            temp=temp->next;
        }
        node*deletenode=temp->next;
        temp->next=deletenode->next;
        delete deletenode;
    }
    void delete_at_end(){
        node*temp=head;
        while(temp->next->next!=nullptr){
            temp=temp->next;
        }
        node*deletenode=temp->next;
        temp->next=nullptr;
        delete deletenode;
    }
    ~linked_list(){
        node * temp=head;
        while(temp!=nullptr){
            node * next=temp->next;
            delete temp;
            temp=next;
        }
    }
};
int main(){
    int n;
    cout<<"Enter the number of elements in the linked list: ";
    cin>>n;
     linked_list list;
    for(int i=0;i<n;i++){
        int data;
        cout<<"Enter the data: ";
        cin>>data;
       
        list.insert(data);
    }
    cout<<"The linked list is: ";
    list.display();
    cout<<endl;
    int data;
    cin>>data;
    list.insert_at_beginning(data);
    cout<<"The linked list after inserting at the beginning is: ";
    list.display();
    cout<<endl;
    int position;
    cout<<"Enter the position at which you want to insert the data: ";
    cin>>position;
    cout<<"Enter the data: ";
    cin>>data;
    list.insert_at(data,position);
    cout<<"The linked list after inserting at the given position is: ";
    list.display();
    cout<<endl;
    return 0;


}