#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,sum=0,a[5]={0,0,0,0,0},b[1002],i,j;
    char ch[1002];
    cin>>n>>m;
    for(i=0;i<n;i++){
        cin>>ch;
    }
    for(i=0;i<m;i++){
        cin>>b[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++){
            if(ch[i]=='A')
                a[0]++;
            if(ch[i]=='B')
                a[1]++;
            if(ch[i]=='C')
                a[2]++;
            if(ch[i]=='D')
                a[3]++;
            if(ch[i]=='E')
                a[4]++;
        }
        sort(a,a+5);
        sum=sum+(a[4]*b[i]);
        a[0]=0;
        a[1]=0;
        a[2]=0;
        a[3]=0;
        a[4]=0;
    }
    cout<<sum<<endl;
    return 0;
}
