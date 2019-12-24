#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,ln;
    char ch[102];
    gets(ch);
    ln=strlen(ch);
    for(i=ln-2;i>=0;i--){
        if(ch[i]!=' '){
            if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u' || ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U' || ch[i]=='y' || ch[i]=='Y' ){
                cout<<"YES"<<endl;
                break;
            }
            else{
                cout<<"NO"<<endl;
                break;
            }
        }
    }
    return 0;
}
