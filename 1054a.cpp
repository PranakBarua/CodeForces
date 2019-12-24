#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a,b,c,d,e,f,x,y,z;
    cin>>a>>b>>c>>d>>e>>f;
    x=(a-b)*d;
    if(x<0)
        x=x*(-1);
    y=((a-c)*e);
    if(y<0)
        y=y*(-1);
    y=y+(2*f);
    z=((a-b)*e);
    if(z<0)
        z=z*(-1);
    z=z+y+f;
    if(z<=x)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;

}
