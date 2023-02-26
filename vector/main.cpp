//
//  main.cpp
//  vector
//
//  Created by Jai  on 15/10/22.
//

#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector <char> vowels{'a','e','i','o','u'};
    cout<<vowels[0]<<endl;
    cout<<vowels[3]<<endl;
    
    
    vector<int> test_scores{78,88,98,66,94};
    cout<<"this is array form test score"<<endl;
    cout<<test_scores[0]<<endl;
    cout<<test_scores[3]<<endl;
    cout<<test_scores[4]<<endl;
    
    cout<<"This is vector form of writing test score output will be same but way to write code is different"<<endl;
    
    cout<<test_scores.at(0)<<endl;
    cout<<test_scores.at(1)<<endl;
    cout<<test_scores.at(3)<<endl;
    
    
    cout<<"Lets update the test score"<<endl;
    cin >>test_scores.at(0);
    cin >>test_scores.at(1);
    cin >>test_scores.at(2);
    cin >>test_scores.at(3);
    cin >>test_scores.at(4);

    cout<<"updated test score"<<endl;
    cout<<test_scores.at(0)<<endl;
    cout<<test_scores.at(1)<<endl;
    cout<<test_scores.at(2)<<endl;
    cout<<test_scores.at(3)<<endl;
    cout<<test_scores.at(4)<<endl;
    
    
   
    
    
    cout<<"this is size of test score :" <<test_scores.size()<<endl;
    
    int addscore{0};
    cout<<"Add test score"<<endl;
    cin>>addscore;
    test_scores.push_back(addscore);
    cout<<"lets enter a new test score"<<endl;
    cin>>addscore;
    test_scores.push_back(addscore);
    
    cout<<"Now it will display new number of test score and size will increse"<<endl;
    cout<<test_scores.at(0)<<endl;
    cout<<test_scores.at(1)<<endl;
    cout<<test_scores.at(2)<<endl;
    cout<<test_scores.at(3)<<endl;
    cout<<test_scores.at(4)<<endl;
    cout<<test_scores.at(5)<<endl;
    cout<<test_scores.at(6)<<endl;
    cout<<test_scores[7]<<endl;;
    cout<<test_scores[8]<<endl;;

    cout<<test_scores[9]<<endl;;

    
    cout<<"new size of test score"<<test_scores.size()<<endl;
    cout<<"new size of test score"<<test_scores.capacity()<<endl;

//
//    now this part is all about 2d vector
    vector <vector<int>> numberrating
    {

        {0,1,2},
        {1,2,3},
        {3,2,4}
    };
    
    
    return 0;
    
    
}
