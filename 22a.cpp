#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n,a[105],i;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    if(n==1)
        cout<<"NO";
    else{
        sort(a,a+n);
        if(a[0]==a[n-1])
            cout<<"NO";
        else{
            for(i=0;i<n-1;i++){
                if(a[i]!=a[i+1]){
                    cout<<a[i+1];
                    break;
                }
            }
        }
    }
    return 0;
}
