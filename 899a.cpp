#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[200005],x,y=1,i;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    if(a[n-1]==1 ){
        x=n/3;
        cout<<x<<endl;
    }
    else{
        if(a[0]==2)
            cout<<0<<endl;
        else{
        for(i=n-1;i>0;i--){
            if(a[i]==a[i-1])
                y++;
            else
                break;
        }
            x=n-y;
            if(x<=y){
                cout<<x<<endl;
            }
            else{
                x=x-y;
                x=x/3;
                x=x+y;
                cout<<x<<endl;
            }
        }
        }
    return 0;
}
