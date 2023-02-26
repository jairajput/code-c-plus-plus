//
//  main.cpp
//  leet code
//
//  Created by Jai  on 03/11/22.
//

//#include <iostream>
//using namespace std;
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    bool isPalindrome(int x);
//    {
//           int x{};
//           int num, digit, rev = 0;
//
//
//        cin>>x;
//
//
//
//        do
//        {
//            digit = x % 10;
//            rev = (rev * 10) + digit;
//            x = x / 10;
//        } while (x != 0);
//
//        cout << rev << endl;
//
//        if (x == rev)
//            cout << " True";
//        else
//            cout << " False";
//
//       return 0;
//   }
//
//   }


#include <iostream>
using namespace std;

int main()
{
     int n, num, digit, rev = 0;

     cout << "Enter a positive number: ";
     cin >> num;

     n = num;

     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);


     if (n == rev)
         cout << "True";
     else
         cout << "False";

    return 0;
}
