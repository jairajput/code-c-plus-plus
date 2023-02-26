//
//  main.cpp
//  Array And Pointer
//
//  Created by Jai  on 06/01/23.
//

#include <iostream>
using namespace std;
int main()
{
    int score[]{98,97,95};
    
    cout<<"value of score is"<<score<<endl;
    int *score_ptr{score};
    cout<<"value of score ptr"<<score_ptr<<endl;
    cout<<score[0]<<endl;
    cout<<score[1]<<endl;
    cout<<score[2]<<endl;
    
    cout<<"----------------------------------------------"<<endl;
    
    cout<<score_ptr[0]<<endl;
    cout<<score_ptr[1]<<endl;
    cout<<score_ptr[2]<<endl;
    
    cout<<"Array offset pointer"<<endl;
    cout<<*score<<endl;
    cout<<*(score+1)<<endl;
    cout<<*(score+2)<<endl;
    
}
