#include<bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
#define endl '\n'
queue<pair<int ,int>>q;
int main()
{
    opt();
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        q.push(make_pair(i+1,a[i]));
    }
    int ans=0;
    while(!q.empty())
    {
        int l=q.front().first;
        int h=q.front().second;
        q.pop();
        if(h>m)
        {
            q.push(make_pair(l,h-m));
        }
        else
        {
            ans=l;
        }
    }
    cout<<ans<<endl;
    return 0;
}

