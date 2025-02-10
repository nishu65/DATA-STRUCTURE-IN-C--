#include<iostream>
using namespace std;
class doublyll{
    private:
        struct node{
            int data;
            node *next;
            node *prev;
        };
        node *head;
        node *tail;
        public:
        doublyll(){
            head = NULL;
            tail = NULL;
        }
        void insert(int data){
            node *temp = new node;
            temp->data = data;
            temp->next = NULL;
            temp->prev = NULL;
            if(head == NULL){
                head = temp;
                tail = temp;
            }
            else{
                tail->next = temp;
                temp->prev = tail;
                tail = temp;
            }
        }
        ~doublyll(){
            node *temp = head;
            while(temp != NULL){
                node *temp1 = temp;
                temp = temp->next;
                delete temp1;
            }
        }
};
int main(){

}