//
//  main.cpp
//  fibonnaci number(recursion)
//
//  Created by Jai  on 02/12/22.
//

#include <iostream>
using namespace std;
unsigned long long fibonnaci(unsigned long long n);

unsigned long long fibonnaci(unsigned long long n){
    
    if(n<=1)
        return 1;
    return fibonnaci(n-1)+fibonnaci(n-2);
    
}
int main()
{
    cout<<fibonnaci(1)<<endl;
    cout<<fibonnaci(2)<<endl;
    return 0;
}

