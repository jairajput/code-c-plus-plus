//
//  main.cpp
//  functionmax
//
//  Created by Jai  on 25/02/23.
//

#include <iostream>
using namespace std;
int max(int x, int y)
{
    if(x>y){
        return x;
    }
    else {
        return y;
        
    }
}
int main()
{
    int a,b;
    cout<<"please enter the number a and b"<<endl;
    cin>>a>>b;
    int m = max(a,b);
    cout<<m<<endl;
}
