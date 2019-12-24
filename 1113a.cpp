#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,v,c,i,j;
    cin>>n>>v;
    if(v>=n){
        v=n-1;
        cout<<v<<endl;
    }
    else{
        c=0;
       n=n-v;
       for(i=2;i<=n;i++){
        j=1*i;
        c=c+j;
       }
       c=c+v;
        cout<<c<<endl;
    }
    return 0;
}
