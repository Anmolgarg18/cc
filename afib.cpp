#include<iostream>
using namespace std;
int main()
{

    int a=0,b=1,c=0,n;
    cout<<"no. to find series\n";
    cin>>n;
    cout<<a<<endl;
    for(int i=0;i<n-1;i++)
    {
        a=b;
        b=c;
        c=a+b;
         cout<<c<<endl ;
    }
    return 0;
}
