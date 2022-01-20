// 1 0 -9 3 6
//output 1 1 1 3 6

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }


    int mx = -19999;
    for(int i = 0; i<n; i++)
    {
        mx = max(mx, arr[i]);
        cout<<mx<<" ";
    }
/*
    int mx1 = -199999999;
    for(int i=0; i<n; i++)
    {
        mx1 = max(mx1, arr[i]);
        cout<<mx1<<" ";
    }*/
    return 0;
}
