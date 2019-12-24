#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,b,p,f,h,c,sum;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>b>>f>>p;
        cin>>h>>c;
        sum=0;
        if(c>=h){
            if(b>=2*p){
                sum=sum+(p*c);
                b=b-(2*p);
                if(b>=2*f){
                    sum=sum+(f*h);
                }
                else{
                b=b/2;
                sum=sum+(b*h);
                }

            }
            else{
                b=b/2;
                sum=sum+(b*c);
            }
        }
        else{
            if(b>=2*f){
                sum=sum+(f*h);
                b=b-(2*f);
                if(b>=2*p){
                    sum=sum+(p*c);
                }
                else{
                b=b/2;
                sum=sum+(b*c);
                }

            }
            else{
                b=b/2;
                sum=sum+(b*h);
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
