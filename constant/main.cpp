//
//  main.cpp
//  constant
//
//  Created by Jai  on 14/10/22.
//


//#include <iostream>
//using namespace std;
//int main()
//{
//
//    cout<<"Estimate for carpet cleaning service:"<<endl;
//
//    int rooms;
//    cin>>rooms;
//    cout<<"Number of rooms:"<<rooms <<endl;
//    float price;
//    cin>>price;
//    cout<<"Price per room:"<<price<<endl;
//
//    float cost,tax;
//    cout<<"cost:"<<rooms * price <<endl;
//    cin>>tax;
//
//
//
//
//}

#include <iostream>
using namespace std;
int main()
{
    cout <<"Hello , welcome to frank carpet cleaning service"<<endl;
    cout<<"How many room would you like cleaned ? :"<<endl;
    int room;
    cin>>room;
    
    
    const int day = 30;
    const double price = 30;
    float tax = 0.06;
    
    
    
    
    
    cout<<"estimate for carpet cleqaning service"<<endl;
    cout<<"number of rooms"<<room<<endl;
    cout<<"price per room"<<price<<endl;
    cout<<"cost :"<<room*price<<endl;
    cout<<"tax:"<<tax<<endl;
    
    cout<<"==================="<<endl;
    
    cout<<"Total Estimate:"<<(room*price)+(room*price*tax)<<endl;
    cout<<"This estimate is valid for"<<day<<endl;
    
    return 0;
    
    
}
