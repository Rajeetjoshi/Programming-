#include<iostream>
using namespace std;
int main()
{
    int r,n,s=0;
    cout<<"enter a no";
    cin>>n;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
    n=n/10;

    }
cout<<"reverse number is"<<s;
return 0;
}