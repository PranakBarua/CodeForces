#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100005],i,j,k,ck=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=n-1;i>1;i--){
        for(j=n-2;j>0;j--){
            for(k=n-3;k>=0;k--){
    if(a[j]+a[k]>a[i]){
        cout<<"YES"<<endl;
        ck=1;
        break;
    }
            }
            if(ck==1)
                break;
        }
            if(ck==1)
                break;
    }
    if(ck==0)
         cout<<"NO"<<endl;
    return 0;
}
