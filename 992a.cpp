#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n,arr[100005],i,j=0,k=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    if(n==1)
    {
        if(arr[0]==0)
            cout<<arr[i]<<endl;
        else
            cout<<1<<endl;
    }
    else{
    for(i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            j++;
        }
        if(arr[i]==0)
            k=1;
    }
    if(arr[i]==0)
        k=1;
    j++;
    if(arr[i]==arr[0])
        j=1;
    if(k==1)
        j--;
    cout<<j<<endl;
    }
    return 0;
}
