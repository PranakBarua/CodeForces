#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long int a,b,c,sum;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        sum=(a+b+c)/2;
        cout<<sum<<endl;
    }
    return 0;
}
