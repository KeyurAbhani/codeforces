#include <bits/stdc++.h>
using namespace std;
#define int long long int


int cache[205][205][205];
int red[205],green[205],blue[205];
int r,g,b;

int dp(int rr,int gg,int bb)
{
    int ans=cache[rr][gg][bb];
    if(ans!=-1)
        return ans;
    ans=0;
    if(rr<r && gg<g)
        ans=max(ans,red[rr]*green[gg]+dp(rr+1,gg+1,bb));
    if(rr<r && bb<b)
        ans=max(ans,red[rr]*blue[bb]+dp(rr+1,gg,bb+1));
    if(gg<g && bb<b)
        ans=max(ans,green[gg]*blue[bb]+dp(rr,gg+1,bb+1));
    
    cache[rr][gg][bb]=ans;
    return ans;
}
int32_t main() {
    memset(cache,-1,sizeof(cache));
    cin>>r>>g>>b;
    for(int i=0;i<r;i++)
        cin>>red[i];
    for(int i=0;i<g;i++)
        cin>>green[i];
    for(int i=0;i<b;i++)
        cin>>blue[i];
    
    sort(red,red+r);
    sort(green,green+g);
    sort(blue,blue+b);
    
    reverse(red,red+r);
    reverse(blue,blue+b);
    reverse(green,green+g);
    
    cout<<dp(0,0,0)<<endl;
    
}
