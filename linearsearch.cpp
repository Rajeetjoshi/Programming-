#include<iostream>
using namespace std;
int main()
{
    int ar[5],i,index,n,flag;
    cout<<"enter elements";
    for(i=0;i<5;i++)
    cin>>ar[i];
for(i=0;i<5;i++)
{
    if(ar[i]==n)
{
    index=i;
    flag=i;
    break;
}
else
{
    flag=0;
}
}
if(flag==1)
{
    cout<<"num found at"<<index;
}
else {
    cout<<"no t found";
}
return 0;
}