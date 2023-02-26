//
//  main.cpp
//  shipping cost calculation
//
//  Created by Jai  on 24/10/22.
//

#include <iostream>
using namespace std;
int main()
{
    int length,width,height;
    double basecost = 2.40;
    
    cout<<"please the length,width,height"<<endl;
    cin>>length>>width>>height;
    
    int dimension = 10;
    const int packagevolume1 = 100;
    const int packagevolume2 = 500;
    
    double package1_surcharge  = 0.10;
    double package2_surcharge = 0.25;
    
    int packagevolume = 0;
    double packagecost{0};
    
    
    if (length>dimension || width>dimension || height||dimension){
        cout<<"dimension limit exceed"<<endl;
    }
    else{
        cout<<(length*width*height)<<endl;
        
        if(packagevolume>packagevolume2){
            basecost += basecost*package2_surcharge;
            cout<<"Adding package 2 "<<endl;
        }
            
            else if   (packagevolume>packagevolume1){
                
                {
                    basecost += basecost*package1_surcharge;
                    cout<<"Adding package 1 "<<endl;
            }
                
                cout<<packagevolume<<endl;
                cout<<packagecost;
                
                
            
        }
    }
    
    
    
    
    
    
    
}
