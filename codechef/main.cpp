//
//  main.cpp
//  codechef
//
//  Created by Jai  on 19/10/22.
//


// question no 1

//#include <iostream>
//using namespace std;
//int main()
//{
//    int t;
//    cin>>t;
//    while (t--){
//        int x ;
//        cin>>x;
//        if(x>=30)
//        {
//            cout<<"yes"<<endl;
//        }
//        else{
//            cout<<"No"<<endl;
//        }
//
//
//        }
//
//}
          // question no 2

//#include <iostream>
//using namespace std;
//int main()
//{
//    int t;
//    cin>>t;
//    while(t--)
//    {
//      int a,b,c;
//      cin>>a>>b>>c;
//      if (a%2==0 && b%2==0 & c%2==0)
//      {
//          cout<<"No"<<endl;
//      }
//      else if(a%2==1 && b%2==1 && c%2==1)
//      {
//          cout<<"No"<<endl;
//      }
//      else if((a%2==0 && b%2==1 && c%2==0)||(a%2==1 && b%2==0 && c%2==0)||(a%2==0 && b%2==0 && c%2==1))
//      {
//          cout<<"Yes"<<endl;
//      }
//      else if((a%2==1 && b%2==1 && c%2==0)||(a%2==0 && b%2==1 && c%2==1)||(a%2==1 && b%2==0 && c%2==1))
//      {
//          cout<<"Yes"<<endl;
//      }
//      else
//      {
//          cout<<"No"<<endl;
//      }
//    }
//}

// practise question

//#include <iostream>
//using namespace std;
//int main()
//{
//    int t;
//    cin>>t;
//
//    while(t--)
//    {
//
//        int x{0},y{0};
//        cin>>x>>y;
//        if (x<y){
//            cout<<"First"<<endl;
//        }
//            else if(x>y){
//                cout<<"Second"<<endl;
//            }
//        else{
//            cout<<"Any"<<endl;
//        }
//        }
//        }
//
//

// question 2
//#include <iostream>
//using namespace std;
//int main()
//{
//    int t;
//    cin>>t;
//    while(t--){
//        int x;
//        int tax = 10;
//        int income{0};
//
//        cin>>x;
//        if(x>100){
//            cout<<x-tax<<endl;
//        }
//        else{
//            cout<<income<<endl;
//        }
//    }
//}
//

// practise question

//#include <iostream>
//using namespace std;
//int main()
//{
//    int t;
//    cin>>t;
//    while(t--){
//        int x,y;
//        if(x>=50 || y>=50)
//        {
//            cout<<"Yes"<<endl;
//
//        }
//        else{
//            cout<<"No"<<endl;
//        }
//    }
//}

//// max min question;
//#include <iostream>
//using namespace std;
//int main()
//{
//    int t;
//    cin>>t;
//    while(t--){
//        int a,b,c;
//        int maximum;
//        int minimum;
//
//        cin>>a>>b>>c;
//        maximum = max(a,b);
//        maximum =max(maximum,c);
//        minimum = min(a,b);
//        minimum = min(minimum,c);
//        cout<<maximum-minimum<<endl;
//
//    }
//}
//


// choco ques
//#include <iostream>
//using namespace std;
//int main()
//{
//    int t;
//    cin>>t;
//    while(t--)
//    {
//        int x,y;
//        cin>>x>>y;
//        if(x==2){
//            cout<<"Chocolate"<<endl;
//
//        }
//        else if(y==5){
//            cout<<"Candy"<<endl;
//        }
//            else{
//                cout<<"Either"<<endl;
//            }
//
//        }
//    }
//


// equql part
//
//#include <iostream>
//using namespace std;
//int main()
//{
//    int t;
//    cin>>t;
//
//    while(t--)
//    {
//        int a,b;
//        cin>>a>>b;
//        if (a%2==0 && b%2==0)
//        {
//            cout<<"Yes"<<endl;
//
//        }
//        else{
//            cout<<"no"<<endl;
//        }
//    }
//}



//#include <iostream>
//using namespace std;
//int main()
//{
//    int t;
//    cin>>t;
//    while(t--)
//    {
//        int n,m;
//        cin>>n>>m;
//        if (n== 5 && m==7){
//            cout<<(n*5+m*7);
//        }
//        else
//            return 0;
//
//    }
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//    int t;
//    cin>>t;
//    while(t--)
//    {
//      int r1,r2,r3;
//      cin>>r1>>r2>>r3;
//      if(r1>(r2+r3) || r2>(r1+r3) || r3>(r1+r2)){
//          cout<<"YES"<<endl;
//
//      }
//      else{
//          cout<<"No"<<endl;
//      }
//    }
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//    int t;
//    cin>>t;
//
//    while(t--){
//        int n;
//        cin>>n;
//        cout<<(n/2)<<endl;
//    }
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//    int t;
//    cin>>t;
//    while(t--)
//    {
//      int n;
//      cin>>n;
//        if(n>=4){
//            cout<<"1"<<endl;
//        }
//          else{
//              cout<<(n/2)<<endl;
//          }
//      }
//    }
//
//#include <iostream>
//using namespace std;
//int main()
//{
//    int t;
//    cin>>t;
//    while(t--)
//    {
//      int n;
//      cin>>n;
//        if(n%4==0){
//            cout<<(n/4)<<endl;
//        }
//          else{
//             cout<<((n/4)+1)<<endl;
//          }
//      }
//    }
//
//
//#include <iostream>
//using namespace std;
//int main()
//{
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        int x;
//        int y;
//        cin>>n>>x>>y;
//        if(x*y>=n){
//            cout<<"yes"<<endl;
//        }
//        else{
//            cout<<"no"<<endl;
//        }
//    }
//}

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int distance = 400;
        int x;
        int y;
        int z;
        cin>>x>>y>>z;
        if((distance/x) < (distance/y) && (distance/x) <(distance/z)){
            cout<<"alice"<<endl;
            
        }
        else if((distance/y) < (distance/x) && (distance/y) <(distance/z)){
            cout<<"charlie"<<endl;
        }
        else{
            cout<<"bob"<<endl;
        }
    }
}
