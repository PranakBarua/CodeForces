#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int i,j,k=0,l,m;
    char ch[50];
    cin>>ch;
    j=strlen(ch);
    for(i=0;i<j;i++){
        if(ch[i]=='a')
            k++;
    }
    l=j/2;
    if(k>l)
        cout<<j<<endl;
    else{
        m=k*2;
        cout<<m-1<<endl;
    }
    return 0;
}
