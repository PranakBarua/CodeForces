#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[105],i;
    double sum=0,ck;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
        sum=sum+(double)a[i];
    }
    ck=sum/(double)n;
    printf("%.12lf",ck);
    return 0;

}
