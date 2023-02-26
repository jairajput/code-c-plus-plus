//
//  main.cpp
//  functon and array
//
//  Created by Jai  on 27/11/22.
//

#include <iostream>
using namespace std;
void print_array(int arr[],size_t size);
void set_array(int arr[], size_t size, int value);

void print_array(int arr[], size_t size){
    for(size_t i{0}; i<size; i++)
        cout<<arr[i] <<"  ";
    cout<<endl;
    
}
    void set_array(int arr[],size_t size, int value){
        for(size_t i{0}; i<size; i++)
            arr[i] = value;
            }
    
int main()
{
    int my_score[] {78,98,67,87,77,78};
    print_array(my_score,6);
    set_array(my_score,100,5);
    print_array(my_score,5);
    
}
