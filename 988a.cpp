#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int i,n,p,j,a[105],b[105],k,c[105];
    cin>>n>>p;
    for(i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+n);
    for(i=0,k=0;i<n-1;i++){
        if(a[i]!=a[i+1]){
            c[k]=a[i];
            k++;
        }
    }
    c[k]=a[i];
    if(p>(k+1)){
        cout<<"NO"<<endl;
    }
    else{
            cout<<"YES"<<endl;
        for(i=0;i<p;i++){
            for(j=0;j<n;j++){
                if(c[i]==b[j]){
                    cout<<j+1<<" ";
                        break;
                }
            }
        }
    cout<<endl;
    }
    return 0;
}

