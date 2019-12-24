#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,arr[200005],i,j,c=0,t=0,a,b,rem;
    cin>>n>>x>>y;
    for(i=0;i<n;i++)
        cin>>arr[i];
    a=pow(10,y);
    b=pow(10,x);
    j=a;
    i=1;
    cout<<a<<" "<<b<<endl;
    while(j!=0){
        rem=j%10;
        if(arr[n-i]!=rem)
            c++;
        j=j/10;
        i++;
    }
    if(arr[n-i]!=0)
        c++;
    cout<<c<<endl;
    return 0;

}
