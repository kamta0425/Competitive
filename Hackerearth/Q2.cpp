#include<bits/stdc++.h>
using namespace std;

#define f first
#define s second

int a[50002][50002];
vector< pair<int,int> > v;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
      memset(a,0,sizeof(a));
      int n,x,u,v;  
      if(n==1 or n==2){printf("0\n");continue;}
      for(int i=1;i<=n;i++){
          scanf("%d",&x);
          v.push_back({x,i});
      }
      for(int i=1;i<n;i++){
          scanf("%d%d",&u,&v);
          a[v][u]=a[u][v]=1;
      }
      sort(v.begin(),v.end());
      cout<<3;
    }
    return 0;
}