//
//  main.cpp
//  if else statement
//
//  Created by Jai  on 24/10/22.
//
#include <iostream>
using namespace std;
int main()
{
    int num;
    int target = 10;
    cout<<"please enter the number:"<<endl;
    cin>>num;
    if (num>target){
        cout<<"\n statement 1"<<endl;
        cout<<num<< " is greater than" <<target<<endl;
        int diff{num-target};
        cout<<diff<<endl;
        }
    else {
        cout<<target<<"is greater than"<<num<<endl;
    }
    
}
