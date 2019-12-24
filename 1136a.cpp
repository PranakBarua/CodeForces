#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,arr[104],i,sum,j=0,t,m,sum1;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[j]>>arr[j+1];
        j+=2;
    }
    cin>>m;
    t=n*2;
    for(i=0;i<t;i++){
        if(arr[i]<=m && arr[i+1]>=m){
            sum=i+i+1;
            sum=sum/2;
            n=n-sum;
            sum1=arr[i]+arr[i+1];
            sum1=sum1/2;
            if(m>=sum1){
                n=n+1;
            cout<<n<<endl;
            break;
        }
        i++;
    }
    return 0;
}
}
