#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,sum=0,a[7],p,q,sum1=0,r=0;
    for(i=0;i<6;i++){
        cin>>a[i];
        sum=sum+a[i];
    }
    p=sum%2;
    q=sum/2;
    if(p != 0)
        cout<<"NO"<<endl;
    else{
        for(i=0;i<=3;i++){
            for(j=i+1;j<=4;j++){
                for(k=j+1;k<=5;k++){
                    sum1=sum1+a[i]+a[j]+a[k];
                    if(sum1==q){
                        r=1;
                        break;
                    }
                    sum1=0;
                }
                if(r==1)
                    break;
            }
             if(r==1)
                    break;
        }
        if(r==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
