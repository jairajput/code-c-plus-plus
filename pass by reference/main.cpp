//
//  main.cpp
//  pass by reference
//
//  Created by Jai  on 27/11/22.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_reference1(int &num);
void pass_by_reference2(string &s);
void pass_by_reference3(vector <string> &v);
void print_vector(const vector<string>&v);

void pass_by_reference1(int &num){
    num = 100;
    cout<<endl;
    
}
void pass_by_reference2(string &s){
    s = "changed";
    
}
void pass_by_reference3(vector <string> &v){
    v.clear();
    
}
void print_vector(const vector <string>  &v)
{
    for(auto s:v)
        cout<<s<<" ";
    
    
}
int main()
{
    int num = 50;
    int another_num = 70;
    
    cout<<"Number before pass by reference "<<num<<endl;
    pass_by_reference1(num);
    cout<<"Number after pass by reference "<<num<<endl;
    
    cout<<endl;
    
    cout<<"Another num before passs by reference"<<another_num<<endl;
    pass_by_reference1(another_num);
    cout<<"Another num after pass by reference "<<another_num<<endl;
    
    cout<<endl;
    
    string name = "cbum";
    cout<<" String before change  "<<name<<endl;
    pass_by_reference2(name);
    cout<<"String after change "<<name<<endl;
    cout<<endl;
    
    vector<string> car {"bmw","Audi","rangerover"};
    cout<<" string before "<<endl;
    print_vector(car);
    cout<<endl;
    pass_by_reference3(car);
    cout<<"string after"<<endl;
    print_vector(car);
    
}

