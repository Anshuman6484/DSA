// Depth First search

#include <bits/stdc++.h>
using namespace std;

void plot_graph(vector<int> graph[], int u, int v)
{
    graph[v].push_back(u);
    graph[u].push_back(v);
}

//void DFS_rec(vector<int> adj[],int s,vector<bool> &visited)      // syntax of passing vector of type bool
void DFS_rec(vector<int> adj[], int s, bool visited[])
{
    visited[s] = true;
    cout << s << ' ';
    for (int u : adj[s])
        if (visited[u] == false)
            DFS_rec(adj, u, visited);
}

int DFS(vector<int> adj[], int v)
{
    //vector<bool> visited(v,false);
    bool visited[v];
    int count_dis = 0;                          //Time Complexity : O(V+E)
    for (int i = 0; i < v; i++)
        visited[i] = false;

    for (int i = 0; i < v; i++)
    {
        if (visited[i] == false)
        {
            DFS_rec(adj, i, visited);
            count_dis++;
        }
    }
    return count_dis;
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
    cout << '\n'
         << DFS(graph, vertex);
    return 0;
}