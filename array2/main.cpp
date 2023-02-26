//
//  main.cpp
//  array2
//
//  Created by Jai  on 01/02/23.
//


//#include <iostream>
//using namespace std;
//int main()
//{
//    int arr[5];
//    arr[0]=1;
//    arr[2]= 2;
//
//    arr[3 / 2] = 2;
//    arr[3] = arr[0];
//
//    cout<< arr[0] << " " << arr[1] << " " << arr[2] << " "
//    << arr[3];
//
//    return 0;
//}

// C++ program to demonstrate that array elements
// are stored contiguous locations

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    // an array of 10 integers.
//    // If arr[0] is stored at
//    // address x, then arr[1] is
//    // stored at x + sizeof(int)
//    // arr[2] is stored at x +
//    // sizeof(int) + sizeof(int)
//    // and so on.
//    int arr[5], i;
//
//    cout << "Size of integer in this compiler is "
//        << sizeof(int) << "\n";
//
//    for (i = 0; i < 5; i++)
//        // The use of '&' before a variable name, yields
//        // address of variable.
//        cout << "Address arr[" << i << "] is " << &arr[i]
//            << "\n";
//
//    return 0;
//}

#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
    int arr[10] = {66,67,87,98,76,87,97,88,99,98};

    
    cout<<"size of array"<<sizeof(arr) <<endl;
    for(int i = 0; i<10; i++)
        cout<<arr[i]<<endl;
    
        
    
}
