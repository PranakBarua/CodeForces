#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,a[203],i,j,k;
    cin>>t;
    while(t--){
        cin>>n;
        j=0;
        k=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(i==0)
                continue;
            if((a[i]-a[i-1])>0)
                j++;
            else
                k++;
        }
        if((a[0]-a[i-1])>0)
            j++;
        else
            k++;
        if(n==1){
            cout<<"YES"<<endl;
        }
        else if(k==1 || j==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}
