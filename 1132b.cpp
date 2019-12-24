#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    long long int sum,sum1,n,m,arr[300005],arr1[300005],i,j,k,l;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cin>>m;
    for(i=0;i<m;i++){
        cin>>arr1[i];
    }
    for(j=0;j<m;j++){
            sum=0;
            sum1=0;
        for(i=n-1,k=1;i>=0;i--,k++){
             if(k<arr1[j])
                sum=sum+arr[i];
             else if(k>arr1[j])
                sum1=sum1+arr[i];
             else
                continue;
        }
        l=sum+sum1;
        cout<<l<<endl;
    }
    return 0;
}
