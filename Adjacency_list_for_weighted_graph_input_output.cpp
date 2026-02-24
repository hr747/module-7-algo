#include <bits/stdc++.h>

using namespace std;
#define f for (int i = 0; i < n; i++)
#define f1 for (int i = 1; i < n; i++)
#define fj for (int j = 0; j < n; j++)
#define s(x) sort(x.begin(),x.end());
#define ll long long

 int main()

{
    int n,e;
    cin>>n>>e;
    vector<pair<int,int>> v[n];
    while (e--)
    {
        /* code */
        int a,b,c;
        cin>>a>>b>>c;
        v[a].push_back({b,c});
        v[b].push_back({b,c});

    }
    for(int i=0;i<n;i++)
    {
        cout<<i<<"->";
        for(auto p:v[i])
        {
            cout<<p.first<<" "<<p.second<<" ,";
            
        }
    }
    

    return 0;
}