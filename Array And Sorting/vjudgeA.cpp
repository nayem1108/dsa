#include<iostream>
using namespace std;

int d(int n)
{
    int i;
    for(i= 1; i<n; i++)
    {
        if(n%i == 0){
            break;
        }
    }
    if(n==i)
        cout<<n<<" is Prime"<<endl;
    return 0;
}
int main()
{
    int n;
    cin>>n;
    d(n);
    return 0;
}
