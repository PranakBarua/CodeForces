#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    if(n%2==0){
        for(i=1;i<n;i++){
            cout<<i+1<<" "<<i<<" ";
                    i++;
        }
        cout<<endl;
    }
    else
        cout<<-1<<endl;
    return 0;
}
