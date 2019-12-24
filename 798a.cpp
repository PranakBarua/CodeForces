#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[17];
    int i,j,ln,ck=0,n,k;
    cin>>ch;
    ln=strlen(ch);
    n=ln;
    j=ln/2;
    k=ln%2;
    ln-=1;
    for(i=0;i<j;i++){
        if(ch[i]!=ch[ln-i])
            ck++;
    }
   if(k==0 && ck==0){
     cout<<"NO"<<endl;
   }
    else if(ck>1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;

}
