//
//  main.cpp
//  Homework3
//
//  Created by Sean Belingheri on 9/15/22.
//

#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    float dollar;
    int dollar1;
    const int quarter = 25, dimes = 10, nickles = 5;
    int q, d, n, p;
    
    cout<<"Enter a dollar amount: $";
    cin>>dollar;
    
    dollar1 = dollar * 100;
    
    q = dollar1/quarter;
    dollar1 %= quarter;
    
    d = dollar1/dimes;
    dollar1 %= dimes;
    
    n = dollar1/nickles;
    
    p = dollar1 %= nickles;
    
    cout<<"Quarters : "<<q<<endl<<"Dimes : "<<d<<endl<<"Nickles : "<<n<<endl<<"Pennies : "<<p<<endl;
    return 0;
    
    
    
}
