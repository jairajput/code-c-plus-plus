//
//  main.cpp
//  dereferencing pointer
//
//  Created by Jai  on 04/01/23.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
    int score{100};
    int *score_ptr {&score};
    
    cout<<*score_ptr<<endl;
    
    *score_ptr = 200;
    cout<<*score_ptr<<endl;
    
    
    cout<<"---------------------------------"<<endl;
    
    double high_temp{100};
    double low_temp{32};
    
    double *temp{&high_temp};
    cout<<*temp<<endl;
    
    temp = &low_temp;
    cout<<low_temp<<endl;
    
    cout<<"----------------------------------------"<<endl;
    
    string name {"frank"};
    string *string_ptr{&name};
    cout<<*string_ptr<<endl;
    
    cout<<"----------------------------------------"<<endl;
    vector<string>stooges{"james","tom","robert"};
    vector<string>*vector_ptr{nullptr};
    
    vector_ptr = &stooges;
    cout<<"stooges"<<(*vector_ptr).at(0)<<endl;
    cout<<"stooges:"<<endl;
    
    for(auto stooge:*vector_ptr);
    cout<<stooge<<""<<endl;
    
    
    
    
    
}
