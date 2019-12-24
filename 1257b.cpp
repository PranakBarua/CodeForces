#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a>=4)
            cout<<"YES"<<endl;
        else if(a==b)
            cout<<"YES"<<endl;
        else if(((a==3)||(a==2)) && b<=3)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
