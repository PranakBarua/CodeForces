#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int arr[3],temp,i,sum;
    for(i=0;i<3;i++)
        cin>>arr[i];
    for(i=0;i<2;i++){
        if(arr[i]>arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    sum=arr[0]+arr[1];
    if(sum>arr[2])
        cout<<0<<endl;
    else{
        sum=(arr[2]-sum)+1;
        cout<<sum<<endl;
    }
    return 0;

}
