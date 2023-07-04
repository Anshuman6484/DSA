// Shortest path in an unweighted graph

#include <bits/stdc++.h>
using namespace std;

void plot_graph(vector<int> graph[], int u, int v)
{
    graph[v].push_back(u);
    graph[u].push_back(v);
}

void shortest_path(vector<int> adj[], int v, int s)
{
    vector<bool> visited(v, false); // Time complexity : O(V+E)
    queue<int> q;
    vector<int> dist(v, 0);
    visited[s] = true;
    q.push(s);
    dist[s] = 0;
    while (q.empty() == false)
    {
        int u = q.front();
        q.pop();
        for (int i : adj[u])
        {
            if (visited[i] == false)
            {
                q.push(i);
                visited[i] = true;
                dist[i] = dist[u] + 1;
            }
        }
    }
    for (auto i : dist)
        cout << i << ' ';
}

int main()
{
    int vertex, edges, source;
    cin >> vertex >> edges >> source;
    vector<int> graph[vertex];
    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        plot_graph(graph, u, v);
    }
    cout << '\n';
    shortest_path(graph, vertex, source);
    return 0;
}