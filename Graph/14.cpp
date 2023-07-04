// Topological Sorting(Kahn's Algorithm)

#include <bits/stdc++.h>
using namespace std;

void plot_graph(vector<int> graph[], int u, int v)
{
    // graph[v].push_back(u);
    graph[u].push_back(v);

    // inDegree[u]++ : to count indegree of vertex u
}

void count_inDegree(vector<int> adj[], int v, vector<int> &inDegree)
{
    for (int i = 0; i < v; i++)
        for (auto j : adj[i])
            inDegree[j]++;
}

void ts(vector<int> adj[], int v)                           //Time complexity : O(V+E)
{
    vector<int> inDegree(v, 0);
    count_inDegree(adj, v, inDegree);
    queue<int> q;
    for (int i = 0; i < v; i++)
        if (inDegree[i] == 0)
            q.push(i);
    while (q.empty() == false)
    {
        int u = q.front();
        cout << u << ' ';
        q.pop();
        for (auto k : adj[u])
        {
            inDegree[k]--;
            if (inDegree[k] == 0)
                q.push(k);
        }
    }
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
    ts(graph, vertex);
    return 0;
}