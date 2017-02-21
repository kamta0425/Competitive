#include<cstring>
#include<cstdio>
using namespace std;
#define infinity 102040700

                /*This is coded by kps */
int a[101][101],n,e,dis[101],visited[101],u,v;
///void dijkshtra(int a[101],int n,int e,int dis[101]){  ...drawback of passing arguments double array needed in seperate function
void dijkshtra(){
    int x=u,wmin=infinity,s,cnt=n-2;
    for(int i=1;i<=n;i++)dis[i]=a[u][i];
    visited[x]=1;
    while(cnt--)
    {   wmin=infinity;
        for(int i=1;i<=n;i++)
           if(wmin>dis[i] and !visited[i])wmin=dis[i],x=i;
        visited[x]=1;
        for(int i=1;i<=n;i++)
           if(!visited[i] and (a[x][i]+dis[x])<dis[i])
             dis[i]=dis[x]+a[x][i]; //dis[x] distance upto x form initial, a[x][i] form current to ith
    }
}
int main(){
    memset(a,infinity,sizeof(a));
    memset(dis,infinity,sizeof(dis));
    printf("Enter no. of nodes: ");
    scanf("%d",&n);
    printf("Enter no. of edges: ");
    scanf("%d",&e);
    for(int i=0;i<e;i++){
        int x,y,w;
        printf("Enter 3 no`s. u->v and weight: ");
        scanf("%d%d%d",&x,&y,&w);
        a[x][y]=w;
    }
    printf("Enter source node: ");
    scanf("%d",&u);
    printf("Enter destination node: ");
    scanf("%d",&v);
    dijkshtra();
    printf("\nShortest distance b/w from %d->%d is : %d\n\n",u,v,dis[v]);
    printf("shortest distance form %d are: \n\n",u);
    for(int i=1;i<=n;i++){
      if(i!=u)
      printf("%d->%d =%d\n",u,i,dis[i]);
    }

}
/*#include <cstdio>         ///from internet
#define infinity 999

void dij(int n,int v,int cost[10][10],int dist[])    ///net copied
{
 int i,u,count,w,flag[10],min;
 for(i=1;i<=n;i++)
  flag[i]=0,dist[i]=cost[v][i];
 count=2;
 while(count<=n)
 {
  min=99;
  for(w=1;w<=n;w++)
   if(dist[w]<min && !flag[w])
    min=dist[w],u=w;
  flag[u]=1;
  count++;
  for(w=1;w<=n;w++)
   if((dist[u]+cost[u][w]<dist[w]) && !flag[w])
    dist[w]=dist[u]+cost[u][w];
 }
}

int main()
{
 int n,v,i,j,cost[10][10],dist[10];
 printf("\n Enter the number of nodes:");
 scanf("%d",&n);
 printf("\n Enter the cost matrix:\n");
 for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
  {
   scanf("%d",&cost[i][j]);
   if(cost[i][j]==0)
    cost[i][j]=infinity;
  }
 printf("\n Enter the source matrix:");
 scanf("%d",&v);
 dij(n,v,cost,dist);
 printf("\n Shortest path:\n");
 for(i=1;i<=n;i++)
  if(i!=v)
   printf("%d->%d,cost=%d\n",v,i,dist[i]);
 return 0;
}
*/
