#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,i,a[1002],ck=0,k,j;
    cin>>n>>d;
    for(i=0;i<n;i++)
        cin>>a[i];
    //sort(a,a+n);
    for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(i==j)
                continue;
            k=a[j]-a[i];
            if(k<0)
                k=k*(-1);
        if(k<=d)
            ck++;
    }
    }
    cout<<ck<<endl;
    return 0;

}
