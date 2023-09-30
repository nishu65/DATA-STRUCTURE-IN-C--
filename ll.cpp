#include <iostream>
using namespace std;
class ll
{
    int a, b;

public:
    ll()
    {
        cout << "value 1 : ";
        cin >> a;
        cout << "value 2 : ";
        cin >> b;
        cout << "add : " << a + b;
    }
};

int main()
{
    ll a;

    return 0;
}