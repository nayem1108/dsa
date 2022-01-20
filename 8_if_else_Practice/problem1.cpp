#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter lenght and breadth:";
    int a, b;
    cin >> a >> b;

    if(a==b){
        cout << "Square";
    }else{
        cout << "Rectangle ";
    }
    return 0;
}