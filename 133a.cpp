#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[105];
    int ln,i,ck=0;
    gets(ch);
    ln=strlen(ch);
    for(i=0;i<ln;i++){
        if(ch[i]=='H' || ch[i]=='Q' || ch[i]=='9' ){
            cout<<"YES"<<endl;
            ck=1;
            break;
        }
    }
    if(ck==0)
        cout<<"NO"<<endl;
    return 0;
}
