#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,a[102],sum=0,i,j=0;
    cin>>n>>t;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
     for(i=0;i<n;i++){
        sum=sum+(86400-a[i]);
        if(sum<=t){
            j++;
            if(sum==t)
                break;
        }
        else{
            j++;
            break;
        }
    }
    cout<<j<<endl;
    return 0;
}
