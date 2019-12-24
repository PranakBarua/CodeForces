#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,a,b,sum;
    cin>>t;
    while(t--){
            sum=0;
        cin>>n>>x>>a>>b;
        if(a>b){
            sum=a-b;
        }
        else{
            sum=b-a;
        }
    sum=sum+x;
    if(sum>=n)
        cout<<n-1<<endl;
    else
        cout<<sum<<endl;
    }
    return 0;
}
