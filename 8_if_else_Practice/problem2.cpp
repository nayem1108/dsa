#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two number's: ";
    cin >> a >> b;

    if (a > b)
    {
        cout << "large is :" << a << endl;
    }
    else if(b>a)
    {
        cout << "large is :" << b << endl;
    }
    else
    {
        cout << "Both are same :" << a << " == " << b << endl;
    }
    return 0;
}