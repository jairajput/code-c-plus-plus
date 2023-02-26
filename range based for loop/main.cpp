//
//  main.cpp
//  range based for loop
//
//  Created by Jai  on 25/10/22.
//


// simple range based 1

//#include <iostream>
//#include <vector>
//
//using namespace std;
//int main()
//{
//    int scores[] {78,67,78,87};
//    for(auto score:scores)
//        cout<<score<<endl;
//}

// range based 2

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <double> tempera{78.6,67.7,87.7,76.5};
    double average_temp{};
    double total{0};
    
    for(auto temp: tempera)
        total = total+temp;
    
    if(tempera.size()!=0)
        average_temp = total/tempera.size();
    cout<<average_temp<<endl;
}
