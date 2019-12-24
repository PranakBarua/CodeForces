#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,m,k,i,j,a=1,arr[300];
    cin>>n>>k;
    arr[0]=2;
    for(i=3;i<=n;i++){
            m=i/2;
        for(j=3;j<=m;j++){
            if(i%2==0){
                break;
            }
            if(j>m){
                arr[a]=3;
                a++;
            }
        }
    }
}
