//
//  main.cpp
//  random number function
//
//  Created by Jai  on 14/11/22.
//

#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;
int main()
{
    int randomnumber{};
    size_t count{10};
    int min{1};
    int max{6};
    
    
    cout<<"RAND_MAX ON  MY SYSTEM IS "<<RAND_MAX<<endl;
    srand(time(nullptr));
    
    for(size_t i{1}; i<=count; i++)
    {
        randomnumber = rand()% max+min;
        cout<<randomnumber<<endl;
    }
    
    return 0;
    
    
}
