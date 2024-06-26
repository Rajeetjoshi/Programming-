#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"\nenter 2 no";
    cin>>a>>b;
    cout<<"\nbefore swapping"<<a<<""<<b;
        c=a;
    a=b;
    b=c;
    cout<<"\nafter swapping"<<a<<""<<b;
    
    
    return 0;
}