//
//  main.cpp
//  challenge question
//
//  Created by Jai  on 27/10/22.
//

#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int>number{};
    char selection{0};
    do{
        cout<<" p to Print Number:"<<endl;
        cout<<"a to Add number:"<<endl;
        cout<<" d to display mean number"<<endl;
        cout<<" s to display smallest number"<<endl;
        cout<<"l to display largest number"<<endl;
        cout<<" q or Q to quit"<<endl;
        
        if(selection == 'p' || selection =='P'){
            if(number.size()==0)
                cout<<"[], list is empty"<<endl;
            else{
                cout<<"[";
                for(auto num: number)
                cout<<num<<"";
               cout<< "]"<<endl;
            }
        }
            
    }
    while(selection!= 'q' && selection!='Q');
}

