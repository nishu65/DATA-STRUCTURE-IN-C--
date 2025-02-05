#include<iostream>
#include<new>;
using namespace std;
class node{
public:
int data;
int * link;
node (){
    data=0;
    link=NULL;
}
void  display();
void ll();

};
void node ::ll(){
    node * p=new (nothrow)node;
}
int main(){

}