// Detect cycle in undirected graph

#include <bits/stdc++.h>
using namespace std;

void plot_graph(vector<int> graph[], int u, int v)
{
    graph[v].push_back(u);
    graph[u].push_back(v);
}

bool dfs_rec(vector<int> adj[], int s, vector<bool> &visited, int parent)
{
    visited[s] = true;                                          //Time complexity : O(V+E)
    for (int k : adj[s])
    {
        if (visited[k] == false)
            if (dfs_rec(adj, k, visited, s) == true)
                return true;
            else if (k != parent)
                return true;
    }
    return false;
}

bool dfs(vector<int> adj[], int v)
{
    vector<bool> visited(v, false);
    bool res = false;
    for (int i = 0; i < v; i++)
        if (visited[i] == false)
            res = dfs_rec(adj, i, visited, -1);
    return res;
}

int main()
{
    int vertex, edges;
    cin >> vertex >> edges;
    vector<int> graph[vertex];
    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        plot_graph(graph, u, v);
    }
    cout << '\n';
    if (dfs(graph, vertex))
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}