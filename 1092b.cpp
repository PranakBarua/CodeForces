#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n,arr[105],i,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(i=0;i<n;i+=2){
        sum=sum+(arr[i+1]-arr[i]);
    }
    cout<<sum<<endl;
    return 0;

}
