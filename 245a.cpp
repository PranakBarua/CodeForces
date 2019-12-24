#include<iostream>
using namespace std;
int main()
{
    int n,t,x,y,i,sum=0,sum1=0,j=0,p,q;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>t>>x>>y;
        if(t==1){
            sum=sum+x;
            j=j+1;
        }
        else{
            sum1=sum1+x;
        }
    }
    p=(j*10)/2;
    q=((n-j)*10)/2;
    if(sum>=p){
        cout<<"LIVE"<<endl;
        if(sum1>=q)
         cout<<"LIVE"<<endl;
        else
         cout<<"DEAD"<<endl;
    }
     else{
        cout<<"DEAD"<<endl;
        if(sum1>=q)
         cout<<"LIVE"<<endl;
        else
         cout<<"DEAD"<<endl;
    }
    return 0;
}
