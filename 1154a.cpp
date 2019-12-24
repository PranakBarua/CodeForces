#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int x,y,z,i;
    int arr[5];
    for(i=0;i<4;i++){
        cin>>arr[i];
    }
    sort(arr,arr+4);
    x=arr[3]-arr[2];
    arr[2]=x+arr[2];
    y=arr[2]-arr[1];
    arr[1]=y+arr[1];
    z=arr[1]-arr[0];
    cout<<x<<" "<<y<<" "<<z<<endl;
    return 0;
}
