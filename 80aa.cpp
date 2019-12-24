#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,m,arr[15]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47},i;
    cin>>n>>m;

    for(i=0;i<15;i++){
        if(arr[i]==n)
            break;
    }
    if(arr[n-1]==47)
         cout<<"NO"<<endl;
    else if(arr[i+1]==m)
          cout<<"YES"<<endl;
    else
         cout<<"NO"<<endl;
    return 0;
}
