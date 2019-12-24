#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,m,arr[105],sum,sum1=0,i;
    cin>>n>>m;
    m=m*2;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++){
        sum=arr[i+1]-arr[i];
        if(sum==m)
            sum1=sum1+1;
        if(sum>m)
            sum1=sum1+2;
    }
    sum1=sum1+2;
    cout<<sum1<<endl;
    return 0;
}
