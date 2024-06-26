#include<iostream>
using namespace std;
void changevalue(int num){   //define fn.
    num=num+10;
    cout<<num<<endl;
}
main(){
    int num=100;
    cout<<num<<endl;  //calling
changevalue(num);
cout<<num;

}