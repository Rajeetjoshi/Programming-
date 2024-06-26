#include<iostream>
using namespace std;
int main()
{
    int h,e,c,m,total,per;
    hindi:cout<<"\nenter marks of hindi";
    cin>>h;
    if(h<0||h>100)
    {
        cout<<"\ninvalid marks enter again";
    goto hindi;
}
eng:cout<<"\nenter marks of english";
    cin>>e;
    if(e<0||e>100)
    {
        cout<<"\ninvalid marks enter again";
    goto eng;
}
comp:cout<<"\nenter marks of computer";
    cin>>c;
    if(c<0||c>100)
    {
        cout<<"\ninvalid marks enter again";
    goto comp;
}
math:cout<<"\nenter marks of maths";
    cin>>m;
    if(m<0||m>100)
    {
        cout<<"\ninvalid marks enter again";
    goto math;
}
total=h+e+c+m;
cout<<"\ntotal marks"<<total;
per=total/4;
if(per<=35)
cout<<"\nu r fail";
else if(per>=35 && per<45)
cout<<"\nIII division";
else if(per>=45 && per<60)
cout<<"\nII division";
else
cout<<"\nI division";
return 0;
}