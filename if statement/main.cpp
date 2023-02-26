//
//  main.cpp
//  if statement
//
//  Created by Jai  on 23/10/22.
//

#include <iostream>
using namespace std;
int main()
{
    int num;
    int lowernum = 10;
    int uppernum = 100;
    
    cout<<" Please enter the number:"<<endl;
    cin>>num;
    
    if (num>lowernum){
        
        cout<<"\n statement 1"<<endl;
        cout<<num<< " is greater than "<<lowernum <<endl;
        
        int diff{num-lowernum};
        cout<<num<<"is "<<diff<< "greater than " <<lowernum <<endl;
    }
    
    if (num < uppernum){
        cout<<"\n statement2"<<endl;
        cout << num << ":is less than " <<uppernum <<endl;
    }
    
    return 0;
    
}
