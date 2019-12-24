#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[500005],i,ck;
    int b[6]={0,0,0,0,0,0};
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==4)
            b[0]=b[0]+1;
        else if(a[i]==8)
           b[1]=b[1]+1;
        else if(a[i]==15)
           b[2]=b[2]+1;
        else if(a[i]==16)
           b[3]=b[3]+1;
        else if(a[i]==23)
           b[4]=b[4]+1;
        else if(a[i]==42)
           b[5]=b[5]+1;
    }
    if(n<6)
        cout<<n<<endl;
    else{
      sort(b,b+6);
      ck=b[0]*6;
      ck=n-ck;
    cout<<ck<<endl;
    }
    return 0;
}
