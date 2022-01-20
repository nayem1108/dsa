#include <iostream>
 
using namespace std;
 
int main() {
    
    string sellers_name;
    float salary,made_money,bonus,total;
    getline(cin, sellers_name);
    cin >> salary >> made_money;
    
    bonus = (made_money*15)/100;
    total = salary+bonus;
    printf("TOTAL = R$ %.2f\n",total);
    
    return 0;
}