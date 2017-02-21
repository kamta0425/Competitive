#include<cstring>
#include<cstdio>
using namespace std;
#define infinity 102040700
#define SIZE 502

int a[SIZE][SIZE],dis[SIZE],visited[SIZE],n,e,u,v;
int len[SIZE];

void dijkshtra(){
    int x=u,wmin=infinity,s,cnt=n-2;
    for(int i=1;i<=n;i++){
        dis[i]=a[u][i];
        if(dis[i]!=infinity)len[i]=1;
    }
    visited[x]=1;
    while(cnt--){
        wmin=infinity;
        for(int i=1;i<=n;i++)
           if(wmin>dis[i] and !visited[i])wmin=dis[i],x=i;
        visited[x]=1;
        for(int i=1;i<=n;i++)
           if(!visited[i] and (a[x][i]+dis[x])<dis[i]){
                dis[i]=dis[x]+a[x][i];
                len[i]=1+len[x];
           }
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&e);
        for(int i=1;i<=n;i++){
            dis[i]=infinity;
            len[i]=visited[i]=0;
            for(int j=1;j<=n;j++)a[i][j]=infinity;
            a[i][i]=0;
        }
        for(int i=0;i<e;i++){
            int x,y,w;
            scanf("%d%d%d",&x,&y,&w);
            a[x][y]=w;
        }
        scanf("%d %d",&u,&v);
        dijkshtra();
        printf("shortest path: %f\n",(1.0*dis[v])/len[v]);
        //for(int i=1;i<=n;i++)printf("%d ",dis[i]);printf("\n");
        for(int i=1;i<=n;i++)printf("%d ",len[i]);printf("\n");
    }
    return 0;
}





