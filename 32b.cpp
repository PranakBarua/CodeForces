#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,ln;
    char ch[205];
    cin>>ch;
    ln=strlen(ch);
    for(i=0;i<ln;){
        if(ch[i]=='.'){
            cout<<0;
            i++;
        }
        else if(ch[i]=='-' && ch[i+1]=='.'){
            cout<<1;
            i+=2;
        }
        else{
            cout<<2;
            i+=2;
        }
    }
    cout<<endl;
    return 0;
}
