#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[150003],i,res,j;
    cin>>t;
    while(t--)
    {
        res=0;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        j=a[n-1];
        for(i=n-2;i>=0;i--){
            if(a[i]>j){
                res++;
            }
            else
                j=a[i];
        }
        cout<<res<<endl;
    }


    return 0;
    }

