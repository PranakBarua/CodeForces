#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[3],x,y,z,ck=0,i;
    cin>>n>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    while(1){
            x=n-a[0];
            y=n-a[1];
            z=n-a[2];
        if(n<a[0] && n<a[1] && n<a[2]){
             cout<<ck<<endl;
             break;
             }
        else if((x%a[0]==0) || (x%a[1]==0) ||(x%a[2]==0)){
            n=x;
            ck++;
        }
        else if((y%a[0]==0) || (y%a[1]==0) ||(y%a[2]==0)){
            n=y;
            ck++;
        }
        else if((z%a[0]==0) || (z%a[1]==0) ||(z%a[2]==0)){
            n=z;
            ck++;
        }
        else{
            cout<<ck<<endl;
            break;
            }
    }
    return 0;
}
