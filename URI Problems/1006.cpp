#include <iostream>
 
using namespace std;
 
int main() {
    double A,B,C,avg;
    cin>>A>>B>>C;
    avg = ((A*2)+(B*3)+(C*5))/(2+3+5);
    printf("MEDIA = %.1lf\n",avg);
    return 0;
}