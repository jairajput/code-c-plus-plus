//
//  main.cpp
//  flag while loop
//
//  Created by Jai  on 25/10/22.
//

#include <iostream>
using namespace std;
int main()
{
    bool done{false};
    int number;
    
    while(!done){
        cout<<"please enter the number between 1 and 5"<<endl;
        cin>>number;
        if(number<=1||number>=5){
            cout<<"Please enter the number between  1 and 5:"<<endl;
            cin>>number;
        }
        
            else{
                cout<<"Thanks"<<endl;
            done = true;
        }
            }
}

