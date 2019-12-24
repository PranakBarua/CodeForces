#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,z,x,y,i,j,a[10004],b[10004],ck=0;
    cin>>n>>m>>z;
    x=z/n;
    y=z/m;
    for(i=0,j=1;i<x;i++,j++){
        a[i]=j*n;
    }
    for(i=0,j=1;i<y;i++,j++){
        b[i]=j*m;
    }
    for(i=0;i<y;i++){
        for(j=0;j<x;j++){
            if(b[i]==a[j]){
                ck++;
                break;
            }
            if(b[i]<a[j])
                break;
        }
    }
    cout<<ck<<endl;
    return 0;

}
