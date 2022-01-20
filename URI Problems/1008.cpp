#include <iostream>
 
using namespace std;
 
int main() {
    int id,per_hour;
    float work_hour;
    
    cin>>id>>per_hour>>work_hour;
    
    float salary = per_hour*work_hour;
    
    printf("NUMBER = %d\nSALARY = U$ %.2f\n",id,salary);
 
    return 0;
}