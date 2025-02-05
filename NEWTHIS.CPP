#include <iostream>
#include <new>
using namespace std;
/*class test
{
    int x;

public:
    void fun(int x)
    {
        this->x = x;
    }
    void dis()
    {
        cout << x;
    }
};*/
class mem {
    public:
    //int *p= new(nothrow)int ;
    int *q=new(nothrow)int [5];
    void array()
    {
        for (int i=0;i<5;i++){
        cout<<"INSERT VALUE "<<i<<" :";
        cin>>q[i];
        }



    }
    void display(){
        cout<<"display data :"<<endl;
        for(int i=0;i<5;i++){
            cout<<"value at "<<i<<":";
            cout<< q[i];
            cout<<endl;
        }
        delete []q;
    }
    /*void write(){
        int b;
        if (!p){
            cout<<" MEMORY ALLOCATED";
        }
     cout<<"insert value : ";
     cin >>b;
     cout<<"address of p :";
     cout<<p;
     cout<<endl;
     *p=b;
    
    }
    void print();*/

};/*
void mem::print (){
    cout<<"value at p :";
    cout<<*p;
    delete p;
    if(p){
        cout<<endl<<"memory deallocated";
    }
    cout<< endl<<*p;

}*/
int main()

{
    //test a;
    mem a;
   // a.fun(55);
   // a.dis();
  // a.write();
  // a.print();
    //return 0;
    a.array();
    a.display();
    return 0;
}