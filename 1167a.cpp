#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,sum,j,i;
    char ch[105];
    cin>>t;
    while(t--){
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ch[i];
        for(i=0;i<n;i++){
            if(ch[i]=='8')
                break;
        }
        n=n-i;
        if(n>=11)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
