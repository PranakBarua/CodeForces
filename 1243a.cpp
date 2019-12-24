#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[1002],sum,i,k;
    cin>>t;
    while(t--){
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        for(i=n-1,k=1;i>=0;i--,k++){
            if(a[i]<k)
                break;
        }
        cout<<k-1<<endl;
    }
    return 0;
}
