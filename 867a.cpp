#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0,sum1=0,n,i;
    char ch[105];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ch[i];
    for(i=0;i<n-1;i++){
        if(ch[i]=='F' && ch[i+1]=='S')
            sum++;
        else if(ch[i]=='S' && ch[i+1]=='F')
            sum1++;
    }
    if(sum1>sum)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
