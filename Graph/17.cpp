// Shortest path in DAG

#include <bits/stdc++.h>
using namespace std;

void plot_graph(vector<pair<int, int>> graph[], int u, int v, int wt)
{
    // graph[v].push_back(u);
    graph[u].push_back({v, wt});
}

/*
void print_graph(vector<pair<int, int>> graph[], int v)
{
    for (int i = 0; i < v; i++)
    {
        for (auto j : graph[i])
            cout << i << "->" << j.first << '\t' << "wt : " << j.second << '\n';
        cout << '\n';
    }
}
*/

int main()
{
    int vertex, edges;
    cin >> vertex >> edges;
    vector<pair<int, int>> graph[vertex];
    for (int i = 0; i < edges; i++)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        plot_graph(graph, u, v, wt);
    }
    cout << '\n';
    //print_graph(graph, vertex);
    return 0;
}