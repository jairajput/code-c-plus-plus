//
//  main.cpp
//  do while
//
//  Created by Jai  on 26/10/22.
//

#include <iostream>
using namespace std;
int main()
{
    char select;
    
    do{
        
        cout<<"please enter the option to see who loves you :"<<endl;
        
        cout<<"\n----------------------------"<<endl;
        
        cout<<"1.please enter option 1:"<<endl;
        cout<<"2.please enter option 2:"<<endl;
        cout<<"3.please enter option 3:"<<endl;
        cout<<"4.Please enter option 4:"<<endl;
        cout<<"5.Please enter option 5:"<<endl;
        cout<<"q.please enter option q to quit:"<<endl;
        
        cin>>select;
        
        if (select== '1')
            cout<<"jai not valid"<<endl;
        else if(select=='2')
            cout<<"vamika loves you archit"<<endl;
        else if(select=='3')
            cout<<"shambhavi loves you harsh"<<endl;
        else if (select=='4')
            cout<<"Ashmita loves you harsh"<<endl;
        else if (select=='5')
            cout<<"meri wli alg hain"<<endl;
        else if (select == 'q'|| select == 'Q')
            cout<<"Thanks for your time and choose wisely:"<<endl;
        else
            cout<<"please enter valid number"<<endl;
        
        
        
        
    }
    while(select!='q' && select!='Q');
        
    
    
}
