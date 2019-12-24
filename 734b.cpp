#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int a,b,c,d,arr[3],sum=0,i,z;
    cin>>a>>b>>c>>d;
    arr[0]=a;
    arr[1]=c;
    arr[2]=d;
    sort(arr,arr+3);
    for(i=0;i<arr[0];i++){
        sum=sum+256;
    }
    z=a-arr[0];
    if(z>b)
        z=b;
    for(i=1;i<=z;i++)
        sum=sum+32;
    cout<<sum<<endl;
    return 0;
}
