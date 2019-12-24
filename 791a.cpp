#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i=1,sum=0,sum1=0;
    cin>>n>>m;
    sum=n;
    sum1=m;
    while(1){
        sum=sum+sum+sum;
        sum1=sum1+sum1;
        if(sum>sum1)
            break;
        i++;
    }
    cout<<i<<endl;
    return 0;
}
