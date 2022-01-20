#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>> n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    //Finding the sum of sub-array from the array
    int sum = 0;
    int newsum = 0;
    for(int i=0; i<n; i++)
    {
        sum = 0;
        ////cout<<"Sub-array of - "<<i;
        for(int j=i; j<n; j++)
        {
            sum += arr[j];
            newsum += sum;
            //cout<<" : "<<j<<" - " ;
            cout<<sum<<endl;
        }
    }
    cout<<"\n"<<newsum;
    return 0;
}
