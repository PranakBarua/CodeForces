#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,d,e,k,pen,pen1,pencil,pencil1;
    cin>>n;
    while(n--){
        cin>>a>>b>>c>>d>>e;
        pen=a/c;
        pen1=a%c;
        if(pen1!=0)
            pen++;
        pencil=b/d;
        pencil1=b%d;
        if(pencil1!=0)
            pencil++;
        if((pen+pencil)>e)
            cout<<"-1"<<endl;
        else
            cout<<pen<<" "<<e-pen<<endl;
    }
    return 0;
}
