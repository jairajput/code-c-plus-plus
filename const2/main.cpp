//
//  main.cpp
//  const2
//
//  Created by Jai  on 14/10/22.
//

#include <iostream>
using namespace std;
int main()
{
    cout<<"Hello welcome to franks carpet cleaning service"<<endl;
    
    cout<<"How many small room would you like cleaned?"<<endl;
    int room;
    cin>>room;
    cout<<"How many large room would you like to cleaned?"<<endl;
    cin>>room;
    
    cout<<"Estimate for carpet cleaning sercvice"<<endl;
    cout<<"Number of small room:"<<room<<endl;
    cout<<"Number of large room:"<<room<<endl;
    
    int pricesmallroom{25};
    int pricelargeroom{35};
    float cost{110};
    float tax{6.6};
    
    cout<<"price per small room"<<pricesmallroom<<endl;
    cout<<"price per large room"<<pricelargeroom<<endl;
    cout<<"cost :"<<cost<<endl;
    cout<<"tax :"<<tax<<endl;
    
    cout<<"======================="<<endl;
    cout<<"Total estimate :"<<(room*pricesmallroom+room*pricelargeroom)+(room*pricesmallroom+room*pricelargeroom*tax)<<endl;
    
    return 0;
    
    
    
    
    
}
