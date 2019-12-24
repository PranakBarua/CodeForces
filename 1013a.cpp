#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,arr[55],arr1[55],sum=0,sum1=0,i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    for(i=0;i<n;i++){
        cin>>arr1[i];
        sum1=sum1+arr1[i];
    }
    if(sum1>sum)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}
