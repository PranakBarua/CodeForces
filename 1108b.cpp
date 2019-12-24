#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,arr[130],arr1[130],i,j;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(i=0,j=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            arr1[j]=arr[i];
            j++;
            i++;
        }
    }
    if(j==1){
         cout<<arr[n-1]<<" "<<arr1[j-1]<<endl;
    }
    else{
    for(i=n-2;i>=0;i--){
        if((arr[i]%arr1[j-1])==0){
            break;
        }

    }
    cout<<arr[n-1]<<" "<<arr[i]<<endl;
    }
    return 0;
}
