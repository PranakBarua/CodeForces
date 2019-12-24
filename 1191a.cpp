#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    i=n%4;
    if(i==1)
        cout<<0<<" "<<"A";
    if(i==0)
        cout<<1<<" "<<"A";
    if(i==2)
        cout<<1<<" "<<"B";
    if(i==3)
        cout<<2<<" "<<"A";
    cout<<endl;
    return 0;
}
