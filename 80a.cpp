#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,m,i,ck,k,j;
    cin>>n>>m;
    for(i=n+1;i<=m;i++){
            k=i/2;
            ck=0;
        for(j=2;j<=k;j++){
            if((i/j)==0){
                ck=1;
                break;
            }
        }
        cout<<i<<endl;
        if(ck==0){
            if(i==m)
              cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
            break;
        }
    }
    if(ck==1)
        cout<<"NO"<<endl;
    return 0;
}

