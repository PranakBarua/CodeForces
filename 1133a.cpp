#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int h1,h2,m1,m2,a,b,c,d,x,y;
    cin>>h1;
    cout<<":";
    cin>>h2;
    cin>>m1;
    cout<<":";
    cin>>m2;
    x=h1+h1;
    a=x/2;
    b=x%2;
    if(b!=0){
        y=m1+m2+60;
        c=y/2;
        if(c<60)
            cout<<x<<":"<<c<<endl;
        else{
            d=c-60;
            x=x+1;
            c=c+d;
            cout<<x<<":"<<c<<endl;
        }
    }
    else{
        y=m1+m2;
        c=y/2;
        cout<<x<<":"<<c<<endl;
    }
    return 0;
}
