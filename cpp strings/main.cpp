//
//  main.cpp
//  cpp strings
//
//  Created by Jai  on 28/10/22.
//

#include <iostream>
#include <string>
using namespace std;
int main()

{
    string s0{};
    string s1{"apple"};
    string s2{"kiwi"};
    string s3{"oranges"};
    string s4{"banana"};
    string s5{s1};
    string s6{s1,0,3};
    string s7{10,'x'};
    
    
//    cout<<s0<<endl;
//    cout<<s0.length()<<endl;
    
    // initilazation;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;
    cout<<s6<<endl;
    cout<<s7<<endl;
}
