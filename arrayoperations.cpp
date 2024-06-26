#include<iostream>
#define clrscr() system("cls")
using namespace std;
int main()
{
int ar[100],i,n,max,p;
clrscr();
xyz:cout<<"enter the limit";
cin>>n;
if(n>100)
{cout<<"invalid limit";
goto xyz;
}
else{
    cout<<"enter elements";
    for(i=0;i<n;i++)
    cin>>ar[i];
max=ar[0];
p=0;
for(i=0;i<n;i++)
{
    if(ar[i]>max)
    max=ar[i];
p=i;
}
cout<<"largest no is:"<<max;
cout<<"position"<<p;

}
    return 0;
}