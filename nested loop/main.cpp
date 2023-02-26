//
//  main.cpp
//  nested loop
//
//  Created by Jai  on 26/10/22.
//

#include <iostream>
using namespace std;
int main()
{
    
    for(int i{1}; i<=10; i++){
        for(int j{1}; j<=10; j++ ){
            cout<<i<<"*"<<j<<"="<<(i*j) <<endl;
        }
        cout<<"----------"<<endl;
    }
      
}
