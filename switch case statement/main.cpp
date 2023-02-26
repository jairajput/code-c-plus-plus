//
//  main.cpp
//  switch case statement
//
//  Created by Jai  on 25/10/22.
//

#include <iostream>
using namespace std;
int main()
{
    char exam_grade;
    cout<<"Please enter the grade:"<<endl;
    cin>>exam_grade;
    
    switch(exam_grade){
        case'a':
        case'A':
            cout<<"You need to score between 90-100,Study hard"<<endl;
            break;
        case 'b':
        case'B':
            cout<<"You need to score between 80-89"<<endl;
            break;
        case'c':
        case 'C':
            cout<<"you need to score between 69-79"<<endl;
            break;
        case 'd':
        case 'D':
            cout<<"you need to score betweeen 59-69"<<endl;
            
           
            
            
    }
    return 0;
}
