#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n,arr[105],i,c=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            c++;
        }
    }
    c++;
    if(arr[0]==0)
        c--;
    cout<<c<<endl;
    return 0;
}
