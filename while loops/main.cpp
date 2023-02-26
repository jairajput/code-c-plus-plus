//
//  main.cpp
//  while loops
//
//  Created by Jai  on 25/10/22.
//

//#include <iostream>
//using namespace std;
//int main()
//{
//    int num{0};
//
//    cout<<"Please enter the num:"<<endl;
//    cin>>num;
//
//    while(num>0){
//        cout<<num<<endl;
//        num--;
//    }
//    cout<<"Blastoff!"<<endl;
//}
// while loop ques 2

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Please enter the integer between 1 to 100:"<<endl;
    cin>>num;
    
    while(num>100){
        cout<<"please enter the integer between 1 to 100"<<endl;
        cin>>num;
    }
    cout<<"Thanks"<<endl;
}
