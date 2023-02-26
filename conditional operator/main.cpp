//
//  main.cpp
//  conditional operator
//
//  Created by Jai  on 25/10/22.
//
//#include <iostream>
//using namespace std;
//int main()
//{
//    int num;
//    cout<<"Please enter the number"<<endl;
//    cin>>num;
//
//  if(num%2==0)
//      cout<<"Number is even"<<endl;
//    else
//        cout<<"Number is odd"<<endl;
//    cout<<((num%2==0)?"even":"odd")<<endl;
//
//}

// comparing two number

#include <iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Please Enter The numbers"<<endl;
    cin>>num1>>num2;
    
    if(num1!=num2){
        cout<<"Largest"<<((num1>num2)?num1:num2)<<endl;
        cout<<"Smallest"<<((num1<num2)?num1:num2)<<endl;
    }
    else{
        cout<<"Both the numbers are same"<<endl;
    }
    return 0;
}

