#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[25],sum=0,sum1=0,sum2=0,i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i+=3){
       sum=sum+arr[i];
    }
    for(i=1;i<n;i+=3){
       sum1=sum1+arr[i];
    }
    for(i=2;i<n;i+=3){
       sum2=sum2+arr[i];
    }
    if(sum>sum1){
        if(sum>sum2)
            cout<<"chest"<<endl;
        else
            cout<<"back"<<endl;
    }
    else{
        if(sum1>sum2)
            cout<<"biceps"<<endl;
        else
            cout<<"back"<<endl;
    }
    return 0;
}
