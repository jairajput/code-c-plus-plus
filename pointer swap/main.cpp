//
//  main.cpp
//  pointer swap
//
//  Created by Jai  on 06/01/23.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

//    void swap(int *a,int*b)
//    {
//        int temp = *a;
//        *a = *b;
//        *b = temp;
//
//
//    }
//int main()
void swap();

    int main(){
        int x = 100;
        int y = 200;
        
        cout<<"display the value of x  and y"<<x<<y<<endl;
        
        swap(x,y);
        cout<<x<<y<<endl;
    }
    

    
