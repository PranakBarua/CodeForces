#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ln1,ln2,ln3,ln4,ck;
    char ch1[202],ch2[102],ch3[102];
    cin>>ch1>>ch2>>ch3;
    ln1=strlen(ch1);
    ln2=strlen(ch2);
    ln3=strlen(ch3);
    if((ln1+ln2)!=ln3)
        cout<<"NO"<<endl;
    else{
        ln4=ln1+ln2;
        strcat(ch1,ch2);
        sort(ch1,ch1+ln4);
        sort(ch3,ch3+ln3);
        ck=strcmp(ch1,ch3);
        if(ck==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
