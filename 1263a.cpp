#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a[3],ck,k,p,q,res,i;
    cin>>t;
    while(t--){
        for(i=0;i<3;i++){
            cin>>a[i];
        }
        sort(a,a+3);
        k=a[0]+a[1];
        if(k<=a[2])
            cout<<k<<endl;
        else{
           res=a[0]+a[1]+a[2];
           p=res/2;
           cout<<p<<endl;
        }
    }
    return 0;

}
