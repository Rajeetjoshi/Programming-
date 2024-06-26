#include<iostream>
using namespace std;
int main()
{
    int n,s=0,r,m;
    cout<<"enter a number";
    cin>>n;
    while(n!=0)
    {
        r=n%10;
        s=(r*r*r)+s;
        n=n/10;
    }
    if(m=s)
    {cout<<"no is armstrong";}
else{cout<<"not armstrong";}
return 0;
}
