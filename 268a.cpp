#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[32],arr1[32],i,sum=0,j;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i]>>arr1[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i]==arr1[j])
                sum=sum+1;
        }
    }
    cout<<sum<<endl;
    return 0;
}
