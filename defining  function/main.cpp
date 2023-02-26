//
//  main.cpp
//  defining  function
//
//  Created by Jai  on 17/11/22.
//

#include <iostream>
using namespace std;

const double pi = 3.14;
float  calculationofradius(double radius){
    return pi*radius*radius;
}

float calculationofcyclinder(double radius,double height){
    return pi*radius*radius*height;
}

// radius of circle 

void radius_circle(){
    double radius;
    
    
    cout<<"Please Enter The Radius Of Circle"<<endl;
    cin>>radius;
    cout<<"Radius of Circle is for the value"<<radius<<calculationofradius<<endl;
}
// radius of cyclinder
void radius_cyclinder(){
    double radius;
    double height;
    cout<<"Please Enter the radius for cyclinder"<<endl;
    cin>>radius;
    cout<<"Please enter the height of cyclinder"<<endl;
    cin>>height;
    
    cout<<"Radius of cyclinder  for radius " <<radius<<" IS: "<<calculationofcyclinder(radius,height)<<endl;
    
    
}
int main()
{
    radius_circle();
    radius_cyclinder();
    
}
