#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,i=0,j=0,k=1;
    cin>>a>>b;
    
    
    while(i<=j)
    {  
        if(i==0)
        {
        i=a;
        j=b;
        }
        k++;
        i=i*3;
        j=j*2;
        // cout<<i<<" "<<j;
    }
    cout<<k-1;
}
