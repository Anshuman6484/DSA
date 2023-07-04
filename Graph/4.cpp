//Adjacency List implementation

#include<bits/stdc++.h>
using namespace std;

void plot_graph(vector<int> graph[],int u,int v)
{
    graph[v].push_back(u);
    graph[u].push_back(v);
}

void print_graph(vector<int> graph[],int v)
{
    for(int i=0;i<v;i++)
    {
        for(auto i : graph[i])
            cout<<i<<' ';
        cout<<'\n';
    }
}

int main()
{
    int vertex,edges;
    cin>>vertex>>edges;
    vector<int> graph[vertex];
    for(int i=0;i<edges;i++)
    {
        int u,v;
        cin>>u>>v;
        plot_graph(graph,u,v);
    }
    print_graph(graph,vertex);
    return 0;
}