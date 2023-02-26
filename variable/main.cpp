//
//  main.cpp
//  variable
//
//  Created by Jai  on 13/10/22.
//

//#include <iostream>
//using namespace std;
//int main()
//{
//    char middle_initial='j';
//    cout <<middle_initial <<endl;
//
//    unsigned short int exam_no = 70;
//    cout<< exam_no <<endl;
//}

#include <iostream>
using namespace std;

int main()
{
    cout<<sizeof(char)<<endl;
    cout<<sizeof(int)<<endl;
    cout<<sizeof(unsigned int)<<endl;
    cout<<sizeof(short)<<endl;
    cout<<sizeof(long long)<<endl;
    
    int age = 20;
    cout<<" size of age "<<sizeof(age)<<endl;
    
    float wage = 23.43;
    cout<<"size of wage"<<sizeof(wage)<<endl;
    
    
    return 0;
    
}

