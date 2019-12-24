#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str[105][105];
    int i,n,j,compare;
    cin>>n;
    for(i=0;i<n;i++)
        for(j=0;j)
        cin>>str[i][j];
    cout<<"NO"<<endl;
    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
            compare=strncmp(str[i],str[j]);
            if(compare==0)
                cout<<"YES"<<endl;
        }
        if(i==j)
            cout<<"NO"<<endl;
    }
    return 0;
}
