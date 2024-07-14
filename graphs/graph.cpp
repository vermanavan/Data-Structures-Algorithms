#include <iostream>
#include <unordered_map>
#include <list>

using namespace std;
class graph{
    public:
        unordered_map<int,list<int>> adj;

        void addEdge(int u,int v,bool directed)
        {
            adj[u].push_back(v);
            if(directed==0)
                adj[v].push_back(u);
        }

        void printList()
{
        for(auto a: adj)
        {
            cout<<a.first<<" ->";
            for(auto j:a.second)
                cout<<j<<", ";
            
            cout<<endl;
        }
}
};


int main(){

    int n;
    cout<<"Enter the number of nodes"<<'\n';
    cin>>n;
    int m;
    cout<<"Enter the number of edges" <<endl;
    cin>>m;

    graph g;
    for(int i=0;i<m;i++)
    {
        int  u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }

g.printList();
    return 0;

}

