//
//  main.cpp
//  di
//
//  Created by Jai  on 12/10/22.
//


#include <iostream>
using namespace std;
int main()
{
    float x,y;
    cout <<"please enter the number"<< endl;
    cin>>x;
    cout <<"please enter the another number"<< endl;
    cin>>y;
    
    if (x>y)
    {
        cout<<"NUMBER "<<x<< "is greater"<<endl;
        
    }
    else if( x<y)
    {
        cout<<"NUMBER "<<y<< "is greater"<<endl;
    }
    
    else{
        cout<<"both are equAL"<<endl;
        
    }
    return 0;
    
}
