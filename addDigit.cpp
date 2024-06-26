#include<iostream>
using namespace std;
int main()
{
    int n,r,s=0;
    cout<<"enter a number";
    cin>>n;

    while(n!=0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    cout<<"\n addition is"<<s;
}