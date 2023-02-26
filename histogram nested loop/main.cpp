//
//  main.cpp
//  histogram nested loop
//
//  Created by Jai  on 27/10/22.
//

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int num_items;
    cout<<"Please enter the num item"<<endl;
    cin>>num_items;
    
    vector <int> data{};
    
    for(int i=1; i<=num_items; i++){
        int data_items;
        cout<<"Enter data item:"<<i<<":";
        cin>>data_items;
        data.push_back(data_items);
    }
    for(auto val:data ){
        for(int i = 1; i<=val; ++i){
            if(i%5==0)
                cout<<"*";
            else
                cout<<"-";
        }
        cout<<endl;
    }
}
