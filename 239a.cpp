#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,k,n,i,t,c=0,j;
    cin>>y>>k>>n;
    j=(y%k);
    j=k-j;
    for(i=j;i<=n;i+=k)
       {
         t=y+i;
         if(t>n){
            break;
         }
          else if((t%k) == 0){
             cout<<i<<" ";
             c=1;
          }
       }
    if(c==0)
        cout<<"-1";
    printf("\n");
    return 0;
}
