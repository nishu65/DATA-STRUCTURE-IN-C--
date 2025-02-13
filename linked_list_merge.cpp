#include<iostream>
#include "ll2.h"
using namespace std;
int main(){
    linked::LinkedList ll;
    ll.insertAtEnd(1);
    ll.insertAtEnd(2);
    ll.insertAtEnd(3);
    ll.insertAtEnd(4);
    ll.display();
    return 0;
}