//
//  main.cpp
//  declaring class and object
//
//  Created by Jai  on 10/01/23.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player{
public:
    
    //Attribute
    string name{"player"};
    int health{100};
    int xp{75};
    
    // Method
    
    void talk(string);
    bool is_dead;
    
    };

class  Account{
public:
    //Attribute
    string name;
    double balance;
    
    //method
    bool deposite(double);
    bool withdraw(double);
    
};

int main()
{
    
    Player frank;
    frank.name = "frank";
    frank.health = 100;
    frank.xp = 14;
    frank.tal
     
    
}
