#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j=1,k=1;
    cin>>n;
    for(i=1;i<n;i++){
        k=k+j;
        if(k>n){
            k=k-n;
        }
        cout<<k<<" ";
        j++;
    }
    cout<<endl;
    return 0;
}
