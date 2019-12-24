#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j,arr[105],c,sum=0,m;
    cin>>n>>k;
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n;i++){
            c=0;
           j=arr[i];
        while(j!=0){
            m=j%10;
            if((m==4)||(m==7))
                c++;
            j=j/10;
        }
        if(c>k)
            sum+=1;
}
    n=n-sum;
    cout<<n<<endl;
    return 0;
}
