#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a,b,c,x,y,z;
    cin>>a>>b>>c;
    if(a>b){
        x=a-b;
        y=2*b;
        if(x>=c){
            y=y+(2*c);
        }
        else{
            z=c-x;
            y=y+(2*x);
            x=z/2;
            y=y+(2*x);
        }
    }
    else if(a<b){
        x=b-a;
        y=2*a;
        if(x>=c){
            y=y+(2*c);
        }
        else{
            z=c-x;
            y=y+(2*x);
            x=z/2;
            y=y+(2*x);
        }
    }
    else{
        y=(2*a);
        x=(c/2);
        y=y+(2*x);
    }
    cout<<y<<endl;
    return 0;

}
