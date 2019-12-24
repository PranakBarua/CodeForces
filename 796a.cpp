#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,a[102],s=0,s1=0,i,j;
    cin>>n>>m>>k;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=m-2;i>=0;i--){
        if(a[i]!=0 && a[i]<=k){
            s=1;
            break;
        }
    }
    for(j=m;j<n;j++){
        if(a[j]!=0 && a[j]<=k){
            s1=1;
            break;
        }
    }
    i=(m-i)*10;
    i=i-10;
    j++;
    j=(j-m)*10;
    if(s==1 && s1==1){
        if(i<j)
            cout<<i<<endl;
        else
            cout<<j<<endl;
    }
    else if(s==1)
            cout<<i<<endl;
    else
            cout<<j<<endl;
    return 0;
}
