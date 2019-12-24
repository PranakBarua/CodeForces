#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ck,ln,ln1;
    char ch[100003],ch1[100003];
    cin>>ch>>ch1;
    ln=strlen(ch);
    ln1=strlen(ch1);
    ck=strcmp(ch,ch1);
    if(ck==0)
        cout<<-1<<endl;
    else{
        if(ln>ln1)
            cout<<ln<<endl;
        else
            cout<<ln1<<endl;
    }
    return 0;
}
