#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,cal,result;
    cin>>n;
    while(n--){
        cin>>a>>b;
        if(a>b)
            result=a-b;
        else
            result=b-a;
        cal=result/5;
        result=result%5;
        cal=cal+(result/2);
        result=result%2;
        cal=cal+(result/1);
        cout<<cal<<endl;
    }
    return 0;
}
