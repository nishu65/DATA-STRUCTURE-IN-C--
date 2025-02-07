#include <iostream>
#include <algorithm>
using namespace std;
class box
{
private:
    int l, b, h;

public:
    box()
    {
        l = 0, b = 0, h = 0;
        cout<<"Default Constructor"<<endl;
    }
    box(int l, int b, int h)
    {
        this->l = l;
        this->b = b;
        this->h = h;
        cout<<"Parameterized Constructor"<<endl;
    }
    int getlength()
    {
        return l;
    }
    int getbreadth()
    {
        return b;
    }
    int getheight()
    {
        return h;
    }
    long long int calculatevolume()
    {
        long long int v = l * b * h;
        return v;
    }
    ~box(){
        cout<<"Destructor"<<endl;
    };
};

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b, h;
    cin >> a >> b >> h;
    box b1;
    box b2(a, b, h);
    cout << b2.getlength() << " ";
    cout << b2.getbreadth() << " ";
    cout << b2.getheight() << " ";
    cout << b2.calculatevolume()<<endl;

    return 0;
}
