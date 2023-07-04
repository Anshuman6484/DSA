#include <bits/stdc++.h>
using namespace std;

void plot_graph(vector<int> graph[],int u,int v)
{
    graph[v].push_back(u);
    graph[u].push_back(v);
}

void bfs(vector<int> graph[],int v,int s)
{
    vector<bool> visited(v,false);
    queue<int> q;
    q.push(s);
    visited[s]=true;
    while(q.empty()!=true)
    {
        int x=q.size();
        for(int j=0;j<x;j++)
        {
            int u=q.front();
            cout<<u<<' ';
            q.pop();
            for(auto k : graph[u])
            {
                if(visited[k]==false)
                {
                    q.push(k);
                    visited[k]=true;
                }
            }
        }
    }
}

int main()
{
    int vertex,edges,source;
    cin>>vertex>>edges>>source;
    vector<int> graph[vertex];
    for(int i=0;i<edges;i++)
    {
        int u,v;
        cin>>u>>v;
        plot_graph(graph,u,v);
    }
    bfs(graph,vertex,source);
    return 0;
}
