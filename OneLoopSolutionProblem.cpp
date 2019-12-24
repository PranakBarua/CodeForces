#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print()
{
      int k,num;
      for(num=1;num<20;num++){
        if(num<11){
            k=num;
            cout<<k<<",";
        }
        else{
            cout<<10-(num-k)<<",";
        }

    }
}
int main()
{
    print();

    return 0;
}


