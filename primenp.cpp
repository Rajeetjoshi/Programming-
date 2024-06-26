#include<iostream>
using namespace std;
int main()
{
    int n,i=2;
    cout<<"enter a no";
    cin>>n;
    while(i<n)
    {
        if(n%i==0)
        {cout<<"not prime";
    break;
    }
    else{cout<<"prime";
    break;
    }
    }
return 0;
}