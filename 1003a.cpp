#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n,arr[105],i,j=1,s=1;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    if(n==1)
        cout<<1<<endl;
    else{
        for(i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                s++;
            }
            else{
            if(j<s){
                j=s;
            }
            s=1;
        }
    }
    if(j<s)
        j=s;
    cout<<j<<endl;
    }
    return 0;
}
