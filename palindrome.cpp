#include<iostream>
using namespace std
int main()
{
    int n,r,s=0,m;
    cout<"enter a no";
    cin>>n;
    m=n;
while(n!=0)
{
    r=n%10;
    s=s*10+r;
    n=n/10;
}
if(m=s)
{cout<<"\nno is palindrome";}
else{
cout<<"no is not palindrome";}

return 0;
}

