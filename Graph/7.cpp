// Breadth first search

#include <bits/stdc++.h>
using namespace std;

void plot_graph(vector<int> graph[], int u, int v)
{
    graph[v].push_back(u);
    graph[u].push_back(v);
}

void BFS(vector<int> adj[], int s, bool visited[])
{
    queue<int> q;
    visited[s] = true;                                      //Time Complexity : O(V+E)
    q.push(s);
    while (q.empty() == false)
    {
        int u = q.front();
        q.pop();
        cout << u << ' ';
        for (int v : adj[u])
        {
            if (visited[v] == false)
            {
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

int BFS_dis(vector<int> graph[], int v)
{
    // vector<bool> visited(v, false);
    bool visited[v];
    int count_dis = 0;              //no.of disconnected graphs
    for (int i = 0; i < v; i++)
        visited[i] = false;
    for (int i = 0; i < v; i++)
    {
        if (visited[i] == false)
        {
            BFS(graph, i, visited);
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
    int count_dis = BFS_dis(graph, vertex);
    cout << '\n' << count_dis;
    return 0;
}