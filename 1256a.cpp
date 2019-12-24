#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Calculate(long long int x,long long int y,long long int z)
{
    int result;
    while(1){
        result=x*y;
        if(y>=z){
            result=0;
            break;
        }
        else if(result > z)
            x=x-1;
        else
            break;
    }

    return result;
}

int main()
{
    long long int q,a,b,n,s;
    cin>>q;
    while(q--){
        cin>>a>>b>>n>>s;
        long long int result=Calculate(a,n,s);
        if(result+b >= s)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
