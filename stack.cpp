#include <iostream>
#include <vector>
using namespace std;
class stack
{
private:
    int top;
    vector<int> v;

public:
    stack()
    {
        top = -1;
    }
    void push(int data)
    {
        v.push_back(data);
        top++;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return;
        }
        v.pop_back();
        top--;
    }
    int Top()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return v[top];
}
~stack()
    {
        v.clear();
        cout << "Stack is destroyed" << endl;
    }
};
    int main()
    {
        stack s;
        s.push(1);
        s.push(2);
        s.push(3);
        cout << s.Top() << endl;
        s.pop();
        cout << s.Top() << endl;
        s.pop();
        cout << s.Top() << endl;
        s.pop();
        cout << s.Top() << endl;
        s.pop();
        return 0;
    }
