//
//  main.cpp
//  default argument value function
//
//  Created by Jai  on 21/11/22.
//

#include <iostream>
#include <iomanip>
using namespace std;


double calc_cost(double base_cost,double tax_rate = 0.8,double shipping_cost = 14);

double calc_cost(double base_cost, double tax_rate, double shipping_cost){
    return base_cost += (base_cost*tax_rate)+shipping_cost;
}

int main()
{
    double cost{0};
    
    cost = calc_cost(100,0.8,98);
    cout<<fixed<<setprecision(2)<<endl;
    cout<< cost<< endl;
    
    cost = calc_cost(30);
    cout<<cost<<endl;
    
    cost = calc_cost(100,0.8);
    cout<<cost<<endl;
    
    
}

