#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[102],i,ck=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2 != 0)
            ck++;
    }
    if(ck==0)
        cout<<n<<endl;
    else if(ck%2 != 0)
        cout<<ck<<endl;
    else
        cout<<n-ck<<endl;
    return 0;
}
