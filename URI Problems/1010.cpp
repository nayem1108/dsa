#include <iostream>
 
using namespace std;
 
int main() {
 
    int p1,p2,i1,i2;
    float price1, price2, amountToPaid;
    
    cin>>p1>>i1>>price1;
    cin>>p2>>i2>>price2;
    
    amountToPaid = ((i1*price1) + (i2*price2));
    printf("VALOR A PAGAR: R$ %.2f\n",amountToPaid);
    
 
    return 0;
}