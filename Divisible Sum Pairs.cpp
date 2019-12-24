#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a[102],i,j,ck=0,sum;
    cin>>n>>k;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
        sum=a[i]+a[j];
        if(sum%k == 0)
            ck++;
    }
    }
    cout<<ck<<endl;
    return 0;
}
