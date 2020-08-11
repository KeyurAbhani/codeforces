#include <bits/stdc++.h>
using namespace std;
#define int long long int
int freq[] = {2, 1, 1, 3, 2, 3, 4, 5, 6, 7, 8, 9}; 
int n=12;
int BITree[13];
int getSum(int index)
{
    index=index+1;
    int sum=0;
    while(index>0)
    {
        sum=sum+BITree[index];
        index=index-(index&(-index));
    }
    return sum;
}
void update(int index,int value)
{
    index=index+1;
    while(index<=n)
    {
        BITree[index]+=value;
        index=index+(index&(-index));
        
    }
    return;
}
int32_t main() {
    
    for(int i=0;i<=n;i++)
        BITree[i]=0;
    for(int i=0;i<n;i++) {
        update(i,freq[i]);
    }
    cout<<getSum(8)<<endl;
    
    
}
