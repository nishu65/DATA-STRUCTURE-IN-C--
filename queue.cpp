#include<iostream>
#include<vector>
using namespace std;
class queue{
private:
    vector<int> arr;
    int front;
    int rear;
    public:
    queue(){
        front = -1;
        rear = -1;
    }
    void push(int data){
        arr.push_back(data);
        rear++;
    }
    void pop(){
        if(front==rear && arr.empty()){
            cout<<"Queue is empty"<<endl;
            return;
        
        }
        else{
        arr.erase(arr.begin());
        rear--;
        }

    }
    int Front(){
        if(front==rear&&arr.empty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[front+1];
    }
    ~queue(){
        arr.clear();
        cout<<"Queue is destroyed"<<endl;
    }
};
int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.Front()<<endl;
    q.pop();
    cout<<q.Front()<<endl;
    q.pop();
    cout<<q.Front()<<endl;
    q.pop();
    q.pop();
    return 0;

}