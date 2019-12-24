#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,m,a,b,i;
    double x,y,z=0.0;
    cin>>n>>m;
    for(i=1;i<=n;i++){
        cin>>a>>b;
        x=(double)a/(double)b;
        y=(double)m*x;
        if(i==1)
            z=y;
        if(y<z)
            z=y;
    }
    printf("%0.8lf\n",z);
    return 0;
}
