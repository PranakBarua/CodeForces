#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[10003],i,p,sum=0,q;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    p=sum/2;
    q=sum%2;
    if(q!=0){
        p=p+1;
    }
    sum=0;
   for(i=0;i<n;i++){
        sum=sum+arr[i];
    if(sum>=p)
    break;
   }
   cout<<i+1<<endl;
    return 0;
}
