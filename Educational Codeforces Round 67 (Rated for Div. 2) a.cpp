#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,t,p;
    cin>>p;
    while(p--){
    cin>>n>>s>>t;
    if(n==s && s==t)
        cout<<1<<endl;
    else{
        if(s<t){
            cout<<s+1<<endl;
        }
        else
            cout<<t+1<<endl;
    }
    }
    return 0;

}
