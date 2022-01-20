#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n][n];

    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            cin>> a[i][j];}}

    int transpose[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            int swap_ = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = swap_;
        }
    }
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
