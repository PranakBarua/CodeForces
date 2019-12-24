#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[100],i,j,sum,k;
    cin>>t;
    while(t--){
        cin>>n;
        sum=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        j=sum%n;
        k=sum/n;
        if(j==0)
            cout<<k<<endl;
        else
            cout<<k+1<<endl;
    }
    return 0;
}
