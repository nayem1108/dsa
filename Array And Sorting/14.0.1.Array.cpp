#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    arr[0] = 1;
    arr[1] = 10;
    arr[2] = 13;
    arr[3] = 15;
    arr[4] = 18;

    cout<<arr[4]<<endl;

    int arr1 [5] ={2,3,4,5,6};
    for(int i=0; i<5; i++)
    {
        cout<<arr1[i]<<" ";
    }
    return 0;
}