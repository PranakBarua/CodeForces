#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ln,i,com;
    char ch[105],ch1[105],ch2[105],ch3[105];
    cin>>ch;
    cin>>ch1;
    ln=strlen(ch);
    for(i=0;i<ln;i++){
        if(ch[i]>ch1[i]){
            ch2[i]=ch1[i];
        }
        else if(ch[i]<ch1[i]){
            ch2[i]=ch[i];
        }
        else
            ch2[i]=ch[i];
    }
    for(i=0;i<ln;i++){
       if(ch[i]>ch2[i]){
            ch3[i]=ch2[i];
        }
        else if(ch[i]<ch2[i]){
            ch3[i]=ch[i];
        }
        else
            ch3[i]=ch[i];
    }
    for(i=0;i<ln;i++){
        if(ch1[i]!=ch3[i]){
            cout<<-1<<endl;
            break;
        }
    }
    if(i==ln){
    for(i=0;i<ln;i++)
        cout<<ch2[i];
    cout<<endl;
    }
    return 0;
}
