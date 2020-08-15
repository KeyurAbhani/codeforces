#include <bits/stdc++.h>
using namespace std;
#define int long long int
/*
    Find Number of subarrays of given array having sum equals to k
    
    
    code reference from geeksforgeeks 
*/


int findSubarraySum(int arr[],int n,int k)
{
    int res=0;
    
    map<int,int>mp;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        if(sum==k)
            res++;
        if(mp.find(sum-k)!=mp.end())
            res=res+mp[sum-k];
        
        mp[sum]++;
    }
    return res;
}
int32_t main() {
    
    int arr[] = { 10, 2, -2, -20, 10 }; 
    int sum = -10; 
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << findSubarraySum(arr, n, sum); 
}
