//
//  main.cpp
//  iterator stl
//
//  Created by Jai  on 22/01/23.
//

#include <iostream>
#include<vector>
#include<set>
#include<map>
#include<list>


using namespace std;

//void test1(){
//    vector<int>num1{1,2,3,4,5};
//    auto it = num1.begin();
//    cout<<*it++<<endl;
//
//    it++;
//    cout<<*it<<endl;
//
//    it+=2;
//    cout<<*it<<endl;
//
//    it-=2;
//    cout<<*it<<endl;
//
//    it = num1.end();
//    it -=1;
//    cout<<*it<<endl;
//}

//void test2(){
//    vector<int>num2{1,2,3,4,5};
//    vector<int>::iterator it = num2.begin();
//    while(it != num2.end()){
//        cout<<*it<<endl;
//        it++;
//    }
//    it != num2.begin();
//    while(it != num2.end()){
//        *it = 0;
//        it++;
//
//    }
//    display(num2);
    
    
//}

void test3(){
    vector<int>num1{1,2,3,4,5};
    vector<int> :: const_iterator it1 = num1.begin();
    // auto it1 = num1.cbegin
    while (it1 != num1.end()) {
        
        cout<<*it1<<endl;
        it1++;
    }
    it1 = num1.begin();
    while(it1 != num1.end())
        cout<<*it1<<endl;
    it1++;
    
}
    
    
    int main()
    {
//        test1();
//        test2();
        test3();
        
        
    }
    
    
    
    
    


