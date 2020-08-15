#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        vector<int>aa;
        int n=s.length();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                cnt++;
            }
            else
            {
                if(cnt!=0)
                    aa.push_back(cnt);
                cnt=0;
            }
        }
        if(cnt!=0)
            aa.push_back(cnt);
        sort(aa.rbegin(),aa.rend());
        int ans=0;
        for(int i=0;i<aa.size();i+=2)
            ans=ans+aa[i];
        cout<<ans<<endl;
    }
}
