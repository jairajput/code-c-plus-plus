//
//  main.cpp
//  bool
//
//  Created by Jai  on 18/10/22.
//

#include <iostream>
using namespace std;
int main()
{
    bool ifequal = false;
    bool ifnotequal = false;
    int num1,num2;
    
    
    cout<<boolalpha;
    
    cout<<"please enter two  number: "<<endl;
    cin>>num1>>num2;
    ifequal=(num1==num2);
    ifnotequal =(num1!=num2);
    
    cout<<ifequal<<endl;
    cout<<ifnotequal<<endl;
    
    return 0;
    
    
}
