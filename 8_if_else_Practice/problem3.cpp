/*
    A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
    Ask user for quantity
    Suppose, one unit will cost 100.
    Judge and print total cost for user.
*/

#include <iostream>
using namespace std;

int main()
{
    int quantity;
    cout << "Enter your quantity" << endl;
    cin >> quantity;
    int cost = quantity * 100;
    float discount = cost * 0.1;

    if (cost >= 1000)
    {
        float bill;
        bill = (cost - discount);
        cout << "Your bill is : " << bill << endl;
    }
    else
    {
        float bill = cost;
        cout << "Your bill is : " << bill << endl;
    }
    return 0;
}