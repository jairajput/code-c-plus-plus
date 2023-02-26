//
//  main.cpp
//  logical operator
//
//  Created by Jai  on 23/10/22.
//

#include <iostream>
using namespace std;
int main()
{
    int lower{10};
    int upper{20};
    int num;
    cout<<boolalpha;
    cout<<"enter the number between:"<<lower<<"&"<<upper <<endl;
    cin>>num;
    
    cout<<(num>lower && num<upper) <<endl;
    cout<<(num>lower || num<upper)<<endl;
    
 
}

