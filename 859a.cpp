#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[26],sum,i;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    if(a[n-1]<=25)
        cout<<0<<endl;
    else{
        sum=a[n-1]-25;
        cout<<sum<<endl;
    }
    return 0;
}
