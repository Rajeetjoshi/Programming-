#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    i=1;
    cout<<"enter the limit";
    cin>>n;
    while(i<=n)
    {
       
        cout<<"\n"<<i;
      sum+=i;
        i++;
        
    }
  cout<<"\nenter the sum"<<sum;
    return 0;
}