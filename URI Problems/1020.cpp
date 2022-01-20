#include <iostream>
 
using namespace std;
 
int main() {
 
    int N;
    int year = 0, month = 0, days = 0;
    
    cin>>N;
    
    if(N>=365){
        year = N/365;
        N = N%365;
    }
    if(N>=30){
        month = N/30;
        N = N%30;
    }
    days = N;
    cout<<year<< " ano(s)"<<endl;
    cout<<month<< " mes(es)"<<endl;
    cout<<days<< " dia(s)"<<endl;
    
    return 0;
}