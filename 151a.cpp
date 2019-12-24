#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n, k, l, c, d, p, nl, np,x,y,w,z,ck;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    x=k*l;
    y=c*d;
    z=x/nl;
    w=p/np;
    if(y>z){
        if(z<w){
            ck=z/n;
            cout<<ck<<endl;
        }
        else{
            ck=w/n;
            cout<<ck<<endl;
        }
    }
    else{
        if(y<w){
            ck=y/n;
            cout<<ck<<endl;
        }
        else{
            ck=w/n;
            cout<<ck<<endl;
        }
    }
    return 0;
}
