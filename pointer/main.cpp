//
//  main.cpp
//  pointer
//
//  Created by Jai  on 18/12/22.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
    int num {10};
    cout<<"value of num is"<<num<<endl;
    cout<<"size  of num is"<<sizeof num<<endl;
    cout<<"Address of num is"<< &num <<endl;
    
    

    int *p;
    cout<<"value of p is"<<p<<endl;
    cout<< "size of p is "<<sizeof p<<endl;
    cout<<"Address of p is"<< &p <<endl;
   
    p = nullptr;
    cout<<"value of p is "<<p<<endl;
    
    cout<<"=================================="<<endl;
    
    int *p1{nullptr};
    double  *p2{nullptr};
    unsigned long long *p3{nullptr};
    vector <string> *p4{nullptr};
    string *p5 {nullptr};
    
    cout<<"size of p1 "<<p1<<endl;
    cout<<"size of p2 "<<p2<<endl;
    cout<<"size of p3 "<<p3<<endl;
    cout<<"size of p4 "<<p4<<endl;
    cout<<"size of p5 "<<p5<<endl;
    
    cout<<"====================="<<endl;
     
    
   
    
     
    
    
    
    
}
