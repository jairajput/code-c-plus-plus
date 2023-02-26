//
//  main.cpp
//  pointer arithmetic
//
//  Created by Jai  on 06/01/23.
//

#include <iostream>
using namespace std;
int main()
{
    int score[]{97,98,96,95,65};
    int *score_ptr{score};
    while(*score_ptr != 65){
        cout<<*score_ptr<<endl;
        score_ptr++;
    }
}
