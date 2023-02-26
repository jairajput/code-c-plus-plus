//
//  main.cpp
//  function parameter
//
//  Created by Jai  on 21/11/22.
//
#include <iostream>
#include <string>
#include <vector>



using namespace std;


void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string>v);
void print_vector(vector<string>v);


void pass_by_value1(int num){
    num = 1000;
    
}
void pass_by_value2(string s){
    s = "changed";
}

void pass_by_value3(vector<string>v){
    v.clear();
    
}
void print_vector(vector<string>v){
    for(auto s:v)
        cout<<s<<""<<endl;
    cout<<endl;
    
}

int main()
{
    int num = 10;
    int another_num = 20;
    
    
    cout<<"value before the pass by value"<<num<<endl;
    pass_by_value1(num);
    cout<<"value after pass by value "<<num<<endl;
    
    
    cout<<"value before the  pass by value"<<another_num<<endl;
    pass_by_value1(num);
    cout<<"value after pass by value"<<another_num<<endl;
    

    
    string name{"jai"};
    cout<<"string value before pass by value 2 "<<name<<endl;
    pass_by_value2(name);
    cout<<"string value after "<<name<<endl;
    
    
    
    
    
    
}
