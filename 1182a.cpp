#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,ck;
    cin>>n;
    if(n%2!=0)
        cout<<0<<endl;
    else{
            i=n/2;
        ck=pow(2,i);
        cout<<ck<<endl;
    }
    return 0;
}
