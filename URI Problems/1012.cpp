#include <iostream>
 
using namespace std;
 
int main() {
    
    float a,b,c;
    double a1,b1,c1,d,e;
    cin>>a>>b>>c;
    //a)
    a1 = (a*c)/2;
    b1 = (c*c)*3.14159;
    c1 = ((a+b)/2)*c;
    d = b*b;
    e = a*b;
    
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",a1,b1,c1,d,e);
    
    return 0;
}