#include <bits/stdc++.h>

using namespace std;
#define f for (int i = 0; i < n; i++)
#define f1 for (int i = 1; i < n; i++)
#define fj for (int j = 0; j < n; j++)
#define s(x) sort(x.begin(), x.end());
#define ll long long
vector<pair<int, int>> v[1004];
int dis[1004];
void dijkstra(int scr)
{
    queue<pair<int, int>> q;
    q.push({scr, 0});
    dis[scr] = 0;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int q_node = par.first;
        int q_dis = par.second;
        for (auto child : v[q_node])
        {
            int child_node = child.first;
            int child_dis = child.second;
            if (q_dis + child_dis < dis[child_node])
            {
                dis[child_node] = q_dis + child_dis;
                q.push({child_node, dis[child_node]});

            }
        }
    }
}

int main()

{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        /* code */
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        v[b].push_back({a, c});
    }
    f{
        dis[i]=INT_MAX;
    }

    dijkstra(0);
    f
    {
        cout << i << "->" << dis[i] << endl;
    }

    return 0;
}