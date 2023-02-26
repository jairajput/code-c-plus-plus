//
//  array2.cpp
//  array_dsa
//
//  Created by Jai  on 01/02/23.
//

#include "array2.hpp"
#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    arr[0]=1;
    arr[2]= 2;
    
    arr[3 / 2] = 2;
       arr[3] = arr[0];
     
       cout<< arr[0] << " " << arr[1] << " " << arr[2] << " "
            << arr[3];
     
       return 0;
   }


