#include <bits/stdc++.h>
using namespace std;
#define int long long int 
int32_t main() {
    
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    int ans=-1;
    for(int i=0;i<=pow(2,9);i++)
    {
        bool overallfound=true;
        for(int aa=0;aa<n;aa++)
        {
            bool found=false;
            for(int j=0;j<m;j++)
            {   
                int temp=a[aa]&b[j];
                temp|=i;
                if(temp<=i)
                {
                    found=true;
                    break;
                }
                
            }
            if(found==false)
            {
                overallfound=false;
            }
        }
        if(overallfound)
        {
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
}
