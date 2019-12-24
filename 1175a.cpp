#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int j,n,k,ck,t,i;
    cin>>t;
    for(j=1;j<=t;j++){
        cin>>n>>k;
        i=0;
        while(n>0){
            ck=n%k;
            if(ck==0){
                n=n/k;
                i++;
            }
            else{
                if(ck<k){
                    i=i+ck;
                    n=n-ck;
                }
                else{
                    n=n-1;
                    i++;
                }
            }

        }
        cout<<i<<endl;
    }
    return 0;
}
