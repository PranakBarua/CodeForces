#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[200005],i,j=1;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n-1;i++){
        if(a[i]!=a[i+1])
            j++;
    }
    cout<<j<<endl;
    return 0;
}
