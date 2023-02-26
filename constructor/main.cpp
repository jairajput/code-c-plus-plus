//
//  main.cpp
//  constructor
//
//  Created by Jai  on 01/02/23.
//

//#include <iostream>
//using namespace std;
//
//class Z
//{
//public:
//    // constructor
//    Z()
//    {
//        cout<<"Constructor called"<<endl;
//    }
//
//    // destructor
//    ~Z()
//    {
//        cout<<"Destructor called"<<endl;
//    }
//};
//
//int main()
//{
//    Z z1; // Constructor Called
//    int a = 1;
//    if(a==1)
//    {
//        Z z2; // Constructor Called
//    } // Destructor Called for z2
//} // Destructor called for z1

//#include <iostream>
//using namespace std;
//class Player
//{
//private:
//    std::string name;
//    int health;
//    int xp;
//public:
//    void set_name(std::string name_val){
//        name = name_val;
//    }
//
//    // calling constructor:
//    Player()
//    {
//        cout<<"No args constructor is called"<<endl;
//
//    }
//    Player(std::string name)
//    {
//        cout<<"string arg constructor called"<<endl;
//
//    }
//    Player(std::string name ,int health, int xp)
//    {
//        cout<<"Three arg constructor is called"<<endl;
//
//    }
//    ~Player()
//    {
//        cout<<"Destructor is called"<<name<<endl;
//    }
//};
//
//int main()
//{
//    {
//    Player slayer;
//    slayer.set_name("Slayer");
//
//}
//
//
//{
//    Player tom;
//    tom.set_name("tom");
//    Player hero;
//    hero.set_name("hero");
//    Player villan("villan",100,12);
//    villan.set_name("villan");
//
//
//
//}
//    Player *enemy = new Player;
//    enemy -> set_name("enemy");
//
//    Player *level_boss = new Player("level boss",100,300);
//    level_boss  -> set_name("level  boss");
//
//
//}
//

// constructor initilization list

#include <iostream>
using namespace std;
class Player
{
private:
    string name;
    int health;
    int xp;
public:
    string name_val;
    int health_val;
    int xp_val;
    
    Player(){
        name= "none";
        health = 0;
        xp = 0;
        
    }
    Player(string name_val)
    {
        name = name_val;
        health = 0;
        xp = 0;
        
    }
    Player(string name_val, int health_val, int xp_val)
    {
        name = name_val;
        health = health_val;
        xp = xp_val;
        
    }
    
    
    
};
int main()
{
    Player empty;
    
}
