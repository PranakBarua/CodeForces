#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a[1003],j,i,t;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        t=a[i];
        j=0;
        while(1){
                  if(t==1){
                cout<<j<<endl;
                break;
            }

            if(t%2 == 0){
                j++;
                t=t/2;
            }
            else if(t%3 == 0){
                j++;
                t=(2*t)/3;
            }
            else if(t%5 == 0){
                j++;
                t=(4*t)/5;
            }
            else{
                cout<<-1<<endl;
                break;
                }
        }
    }
    return 0;
}
