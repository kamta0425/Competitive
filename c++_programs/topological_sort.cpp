#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int nodes,edges,deg[20],que[20];
int f=0,r=0;
bool mark[20];
vector<int> v[20],temp;

void toposort(){
    while(f<r){
        int x=que[f++];
        mark[x]=true;
        temp.clear();
        temp=v[x];
        sort(temp.begin(),temp.end());
        for(int i=0;i<temp.size();i++){
           if(!mark[temp[i]])
           mark[temp[i]]=true,que[r++]=temp[i];
        }
    }
}

int main()
{ cout<<"Enter No of nodes : ";
  cin>>nodes;
  cout<<"Enter No of edges: ";
  cin>>edges;
  int x,y;
  for(int i=1;i<=edges;i++){
    cin>>x>>y;
    v[x].push_back(y);
    deg[y]++;
  }
  for(int i=0;i<nodes;i++)
    if(deg[i]==0){
      que[r++]=i;
      mark[i]=true;
    }
 toposort();
 for(int i=0;i<nodes;i++)
    cout<<" "<<que[i]<<" ";



    return 0;
}

