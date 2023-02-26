//
//  main.cpp
//  workwithfunction
//
//  Created by Jai  on 14/11/22.
//

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    double num;
    
    cout<<"please enter the number"<<endl;
    cin>>num;
    
    cout<<"the square root of number is "<<sqrt(num)<<endl;
    cout<<"the cube root of number is"<<cbrt(num)<<endl;
    
    cout<<"the sine value of number is "<<sin(num)<<endl;
    cout<<"the cosine value of number is"<<cos(num)<<endl;

    cout<<"the ceil value of number is"<<ceil(num)<<endl;
    cout<<"the floor value of number is"<<floor(num)<<endl;
    cout<<"the round value of number is"<<round(num)<<endl;
    
    double power;
    cout<<"please enter the number "<<endl;
    cin>>power;
    cout<<num<<"value of the power is"<<pow(num,power)<<endl;
    
    
}
