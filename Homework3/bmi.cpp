//
//  bmi.cpp
//  Homework3
//
//  Created by Sean Belingheri on 9/15/22.
//

#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    float feet, inch, weight, height;
    const float inches = 12, cm = 2.54, m = 100, kg = 2.20462;
    cout<<"Enter height (ft. in.): ";
    cin>>feet>>inch;
    cout<<"Enter weight (lbs): ";
    cin>>weight;
    height = (feet*inches)+inch;
    height *= cm;
    height /= m;
    weight /= kg;
    
    
    cout<<"Height is "<<height<<"m. "<<"Weight is "<<weight<<"kg."<<endl;
    cout<<"The BMI is "<<weight/(height*height)<<endl;
    return 0;
}
