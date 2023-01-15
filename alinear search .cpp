#include<iostream>
using namespace std;
int main()
{
    int n,l[10],element;
    cout<<"length of array\n";
    cin>>n;
    cout<<"searching element \n";
    cin>>element;
    cout<<" element of the array\n";
    for(int i=0;i<n;i++)
    {
         cin>>l[i];
    }
    for(int i=0;i<n;i++)
    {
        if(l[i]==element)
        {
            cout<<" ele ment present= "<<element<<endl;
            return 0;
        }
    }
    cout<<"element is not present = "<<element;
    return 0;
}
