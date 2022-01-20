#include <iostream>
 
using namespace std;
 
int main() {
 
    double R;
    cin>>R;
    R = ((4.0/3) * 3.14159 * (R* R* R));
    printf("VOLUME = %.3f\n",R);
 
    return 0;
}