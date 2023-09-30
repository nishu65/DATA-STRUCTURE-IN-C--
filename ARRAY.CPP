#include <iostream>
using namespace std;
class arr{
    public:
    void ar(){
    int a;
    cout<<"ENTER ARRAY LENGTH : ";
    cin>>a;
    array(a);
    }
    void array(int a){
        int b[a];
        cout <<"ARRAY VALUE :  "<<endl;
        for(int i =0;i<a;i++){
            cout<<"INPUT AT " << i << ":" ;
            cin>>b[i];
        }
    }
};
int main(){
    arr a;
    a.ar();


}