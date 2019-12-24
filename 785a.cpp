#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m=0;
    char ch[200003];
   cin>>n;
   while(n--){
    cin>>ch;
    if(ch[0]=='T'){
        m=m+4;
        continue;
    }
    if(ch[0]=='C'){
         m=m+6;
        continue;
    }
    if(ch[0]=='O'){
         m=m+8;
        continue;
    }
    if(ch[0]=='D'){
         m=m+12;
        continue;
    }
    if(ch[0]=='I'){
         m=m+20;
    }
   }
   cout<<m<<endl;
    return 0;
}
