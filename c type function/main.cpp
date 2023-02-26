//
//  main.cpp
//  c type function
//
//  Created by Jai  on 28/10/22.
//

#include <iostream>
#include <cstring>
#include<cctype>
using namespace std;
int main()
{
    char firstname[20]{};
    char lastname[20]{};
    char fullname[50]{};
    char temp[50]{};
    
//    cout<<"Please enter your first name"<<endl;
//    cin>>firstname;
//    cout<<"Please enter your last name"<<endl;
//    cin>>lastname;
//    cout<<"-------------"<<endl;
//    
//    cout<<"hey " <<firstname<< " your first name has "<<strlen(firstname)<<" character"<<endl;
//    cout<<"and your lastname "<<lastname<<" has "<<strlen(lastname)<<" character"<<endl;
//    
//    strcpy(fullname,firstname);
//    strcat(fullname,"");
//    strcat(fullname,lastname);
//    cout<<"your full name is "<<fullname<<endl;
//
//    
    cout<<"Please enter your first name"<<endl;
    cin.getline(fullname,50);
    cout<<"your full name is "<<fullname<<endl;
    
    cout<<"-------"<<endl;
    strcpy(temp , fullname);
    if(strcmp(temp,fullname)==0)
        cout<<"both the name are same"<<endl;
    else
        cout<<"not same"<<endl;
    
}
