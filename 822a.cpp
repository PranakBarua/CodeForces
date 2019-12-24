#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i,res=1;
    cin>>a>>b;
    if(a>b)
        c=b;
    else
        c=a;
    for(i=2;i<=c;i++){
        res=res*i;
    }
    cout<<res;
    return 0;
}
