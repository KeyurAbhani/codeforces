#include <iostream>

using namespace std;

int main() {
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    cout<<x<<" "<<y<<endl;
    for(int i=1;i<=m;i++)
    {
        if(i!=y)
            cout<<x<<" "<<i<<endl;
    }
    bool lastcol=true;
    int row=x-1;
    for(int i=x-1;i>=1;i--)
    {
        if(lastcol)
        {
            for(int j=m;j>=1;j--)
            {
                cout<<i<<" "<<j<<endl;
            }
            lastcol=false;
        }
        else
        {
            for(int j=1;j<=m;j++)
            {
                cout<<i<<" "<<j<<endl;
            }
            lastcol=true;
        }
    }
    for(int i=x+1;i<=n;i++)
    {
        if(lastcol)
        {
            for(int j=m;j>=1;j--)
            {
                cout<<i<<" "<<j<<endl;
            }
            lastcol=false;
        }
        else
        {
            for(int j=1;j<=m;j++)
            {
                cout<<i<<" "<<j<<endl;
            }
            lastcol=true;
        }
    }
}
