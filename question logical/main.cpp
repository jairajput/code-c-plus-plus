//
//  main.cpp
//  question logical
//
//  Created by Jai  on 23/10/22.
//

#include <iostream>
using namespace std;
int main()
{
    int windspeed;
    double temperatuer{};

    bool wearcoat;
    
    const int windspeedforcoat{25};
    const double tempforcoat{45};
    
    cout<<boolalpha;
    
    cout<<"Please enter the windpeed:"<<endl;
    cin>>windspeed;
    cout<<"please enter the tempe:"<<endl;
    cin>>temperatuer;
    
    wearcoat = (windspeed>windspeedforcoat && temperatuer <=tempforcoat);
    cout<<wearcoat;
    
    
    
    

}
