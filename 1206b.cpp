#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,a[100000];
    long long int res=0,p=0,q=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<0){
              p++;
              res=res+(((-1)*a[i])-1);
        }

        else if(a[i]==0)
            q++;
        else
            res=res+(a[i]-1);
    }
    if(p%2==0){
        res=res+q;
    }
    else{
        if(q!=0){
            res=res+q;
        }
        else{
            res=res+2;
        }
    }
    cout<<res<<endl;
    return 0;
}
