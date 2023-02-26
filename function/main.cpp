//
//  main.cpp
//  function
//
//  Created by Jai  on 10/11/22.
//

#include <iostream>
using namespace std;
int max(int x, int y)
{
    if (x>y)
        return x;
    else
        return y;
}

int main()
{
    int a = 10, b = 20;
    int m = max(a,b);
    cout<<m;
    
    return 0;
    
}
