#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    char ch[15],ch1[15],a[15],b[15];
    cin>>ch>>ch1;
    cin>>n;
    cout<<ch<<" "<<ch1<<endl;
    strcpy(a,ch);
    strcpy(b,ch1);
    for(i=0;i<n;i++){
        cin>>ch>>ch1;
        if(strcmp(ch,a)==0){
            cout<<ch1<<" "<<b<<endl;
            strcpy(a,ch1);
        }
        else if(strcmp(ch1,a)==0){
            cout<<ch<<" "<<b<<endl;
            strcpy(a,ch);
        }
         else if(strcmp(ch,b)==0){
            cout<<ch1<<" "<<a<<endl;
            strcpy(b,ch1);
        }
         else if(strcmp(ch1,b)==0){
            cout<<ch<<" "<<a<<endl;
            strcpy(b,ch);
        }

    }
    return 0;
}
