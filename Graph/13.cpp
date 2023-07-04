// Detect cycle in a Directed graph

#include <bits/stdc++.h>
using namespace std;

void plot_graph(vector<int> graph[], int u, int v)
{
    // graph[v].push_back(u);
    graph[u].push_back(v);
}

bool dfs_rec(vector<int> adj[], int s, vector<bool> &visited, vector<bool> &recSt)
{
    visited[s] = true;
    recSt[s] = true;
    for (auto k : adj[s])                                                   // Time complexity : O(V+E)
    {
        if (visited[k] == false && dfs_rec(adj, k, visited, recSt))
            return true;
        else if (recSt[k] == true)
            return true;
    }
    recSt[s] = false;
    return false;
}

bool dfs(vector<int> adj[], int v)
{
    vector<bool> visited(v, false);
    vector<bool> recSt(v, false);
    bool res = false;
    for (int i = 0; i < v; i++)
        if (visited[i] == false)
            res = dfs_rec(adj, i, visited, recSt);
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