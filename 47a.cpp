#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,sum=0;
    cin>>n;
    for(i=1;i<=50;i++){
            sum=sum+i;
        if(sum==n){
            cout<<"YES"<<endl;
            break;
        }
        if(sum>n){
            cout<<"NO"<<endl;
            break;
        }
    }
    return 0;
}
