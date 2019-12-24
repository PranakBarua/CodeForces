#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n,arr[100005],arr1[100005],i,s;
    long long int sum=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
     for(i=0;i<n;i++){
        cin>>arr1[i];
    }
    sort(arr1,arr1+n);
    s=arr1[n-1]+arr1[n-2];
    if(s>=sum)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
