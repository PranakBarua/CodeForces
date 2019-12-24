#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i;
    cin>>n>>m;
    for(i=1;i<=n;i++){
            m=m-i;
            if(m<=0){
                if(m==0){
                  cout<<0<<endl;
                    break;}
                else{
                    m=m*(-1);
                  cout<<m<<endl;
                    break;
                }
            }
            if(m<=i && i!=n){
                cout<<m<<endl;
                break;}

            if(i==n){
                i=0;
            }
    }
    return 0;
}
