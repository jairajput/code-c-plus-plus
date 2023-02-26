//
//  main.cpp
//  section 8 solution
//
//  Created by Jai  on 23/10/22.
//

#include <iostream>
using namespace std;
int main()
{
    int num;
    const int dollar_value = 100;
    const int quarter_value = 25;
    const int  dime_value = 10;
    const int nikel_value = 5;
    const  int penny_value = 1;
    
    
    int balance,dollar,quarter,dime,nikel,penny;
    cout<<"please enter the value:"<<endl;
    cin>>num;
    
    dollar = num/dollar_value;
    balance = num - (dollar*dollar_value);
    quarter = num/quarter_value;
    balance -= quarter*quarter_value;
    dime = num/dime_value;
    balance -= dime*dime_value;
    nikel = num/nikel_value;
    balance -= nikel*nikel_value;
    penny = num/penny_value;
    balance -= penny*penny_value;
    
    cout<<dollar<<endl;
    
    cout<<quarter<<endl;
    cout<<dime<<endl;
    cout<<nikel<<endl;
    cout<<penny<<endl;
    
    
}
