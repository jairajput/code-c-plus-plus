//
//  main.cpp
//  class and object
//
//  Created by Jai  on 15/01/23.
//

#include <iostream>
using namespace std;
class Car{
public:
    int speed (int maxspeed);
    
};
int car;
int speed (int maxspeed)
{
    return maxspeed;
    
}

int main()
{
    Car myobj;
    cout<<myobj.speed(200)<<endl;
    
    
}
