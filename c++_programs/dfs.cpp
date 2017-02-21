#include<iostream>
#include<vector>
using namespace std;

vector<int> v[100];
bool mark[100];
int nodes,edges;

void dfs(int x){         ///incomplete.....use stack here instead queue
    mark[x]=1;
    for(int i=0;i<v[x].size();i++){
      mark[v[x]]=1;
      cout<<v[x]<<" ";
      if()dfs
    }

}

int main{
  cout<<"Enter no. of nodes :- ";
  cin>>nodes;
  cout<<"Enter no. of edges :- ";
  cin>>edges;
  for (int i=1;i<=nodes;i++) mark[i]=false;
  int x,y;
  for(int i=0;i<edges;i++){
    cin<<x<<y;
    v[x].push_back(y);
  }

  for(int i=1;i<=nodes;i++){
     cout<<"Adjancy of "<<i<<" => ";
     for (int j=0;i<adj.size();j++){
        cout<<adj[i][j]<<" ";
     }
     cout<<endl;
  }

}








