#include<iostream>
using namespace std;
int main()
{
   /* int i,j,k;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=5;j++)
         {
            for(k=1;k<=3;k++)
            {cout<<i<<j<<k;}
         }
    }*/

    /*int i,j;
    for(i=1;i<=7;i++)
    {for(j=1;j<=5;j++)
    {cout<<i,j;
    break;}
    break;}*/

   /*int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            cout<<i<<j;
            if(i==j)
            break;
        }
    }*/

    /*int i;
    for(i=1;i<=10;i++)
    {
        if(i%2==0)
        continue;         //  :-CONTINUE STATEMENT
    cout<<i;
    }*/

    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {if(i==j)
        continue;
        cout<<i<<j;}
    }

    return 0;
}