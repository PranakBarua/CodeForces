#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,a[100],i,ck;
    cin>>t;
    while(t--){
            ck=0;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=n-1;i>0;i--){
            if(a[i]-a[i-1]==1)
                ck=1;
        }
        if(ck==1)
            cout<<2<<endl;
        else
            cout<<1<<endl;
    }
    return 0;
}
