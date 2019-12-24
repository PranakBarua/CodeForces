#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,k;
    char ch[502],ch1[502];
    cin>>n;
    while(n--){
            k=0;
       cin>>ch;

    j=strlen(ch);
    for(i=0;i<j;i++){
        if(i==(j-1)){
            ch1[k]=ch[i];
            k++;
        }
        else{
            if(ch[i]==ch[i+1]){
                i=i+1;
            }
            else{
                ch1[k]=ch[i];
                k++;
            }
        }
    }
    j=strlen(ch1);
    sort(ch1,ch1+j);
    cout<<ch1<<endl;
    }

    return 0;
}
