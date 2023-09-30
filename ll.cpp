#include<iostream>
using namespace std;
class ll {
    public :
    struct node{
        int data;
        int *p;
    }link; 

};

int main (){
    int*head;
    head =NULL;
    ll on;
    on.link.data=5;
    on.link.p;
    cout<<*on.link.p<<endl;
    head=&on.link.data;
    cout<<"data :"<<*head<<endl;
    on.link.p=&on.link.data+1;
    on.link.data=10;
    on.link.p=NULL;
    cout<<*on.link.p;
   // while(head!=NULL){
     //   int i=0;
    cout<<"new"<<*(head+1);
    //} 
    return 0;




}