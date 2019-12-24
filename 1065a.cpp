#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long int a,b,c,d,n,f,l,e;
    cin>>n;
    while(n--){
        cin>>a>>b>>c>>d;
        f=a/d;
        l=f/b;
        e=f+(l*c);
        cout<<e<<endl;
    }
    return 0;

}

