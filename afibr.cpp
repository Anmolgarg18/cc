#include<iostream>
using namespace std;
int  fib(int a)
 {
     int z;
     if(a==1||a==0)
     {
         return a ;
     }
    z= fib(a-1)+fib(a-2);
     return z;
 }
 int main()
 {

     int f,i;
     cout<<"no of fibonacci term  \n";
     cin>> f;

    for(i=0;i<f;i++)
     {
         cout<<" " <<fib(i);
     }
      return 0;
 }

