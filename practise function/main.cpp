//
//  main.cpp
//  practise function
//
//  Created by Jai  on 01/12/22.
//

#include <iostream>
using namespace std;
int sum(int x, int y){
    return x+y;
}
float multiply(float x , float y){
    return x*y;
}

void areaofcircle( int r){
    float pi = 3.14;
    cout<<(pi*(r*r))<<endl;
    
    
}

int main(){
    cout<<sum(50,50)<<endl;
    cout<<multiply(9,9)<<endl;
    areaofcircle(7);
    return 0;
    
    
}

