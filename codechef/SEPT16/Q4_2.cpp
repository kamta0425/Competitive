#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <set>
#include <vector>
using namespace std;
                            // Q 4
int x[1002][1002],c[1002],fix[1002],cnt[1002];

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,a,b,f=1;
        memset(x,0,sizeof(x));
        scanf("%d%d",&n,&m);
        for(int i=1;i<=m;i++){
            scanf("%d%d",&a,&b);
            x[a][b]=x[b][a]=1;
        }
        for(int i=1;i<=n;i++)cnt[i]=c[i]=fix[i]=0;

        if(n<=2){printf("YES\n");continue;}
        if(m==0){printf("NO\n");continue;}

        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i==j)continue;
                if(x[i][j])cnt[i]++;
            }
        }

        int ii=0,jj=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i==j)continue;
                if( (!fix[i])*(!fix[j]) and x[i][j]==0){
                    fix[i]=fix[j]=1;
                    c[i]=1;c[j]=2;
                    ii=i;jj=j;
                    goto q;
                }
            }
        }q:
        for(int i=n;i>=1;i--){
            for(int j=n;j>=1;j--){
                if(i==j)continue;
                if(ii==i and jj==j)goto g;
                if(ii==0 and jj==0)goto g;
                if( (!fix[i])*(!fix[j]) and x[i][j]==0  ){
                    //printf("%d %d hello ",i,j);
                    if( !fix[i] ){
                        if(x[ii][i]==0  ){
                            fix[i]=1;
                            c[i]=(c[jj]==1)? 2:1;
                        }
                        else if( x[jj][i]==0 ){
                            fix[i]=1;
                            c[i]=(c[jj]==1)? 2:1;
                        }
                    }
                    if( !fix[j] ){
                        if(x[ii][j]==0 ){
                            fix[j]=1;
                            c[j]=(c[ii]==1)? 2:1;
                        }
                        else if(x[jj][j]==0 ){
                            fix[j]=1;
                            c[j]=(c[jj]==1)? 2:1;
                        }
                    }
                    if( (!fix[i])*(!fix[j]) ){
                        //printf("hello");
                        if(cnt[i]<cnt[j]){
                            fix[i]=fix[j]=1;
                            c[i]= (cnt[ii]>cnt[jj])?( (c[ii]==1)? 1:2 ):( (c[jj]==1)? 1:2) ;
                            c[j]= (c[i]==1)? 2:1;
                        }else{
                            fix[i]=fix[j]=1;
                            c[j]= (cnt[ii]>cnt[jj])?( (c[ii]==1)? 1:2 ):( (c[jj]==1)? 1:2) ;
                            c[i]= (c[j]==1)? 2:1;
                        }
                    }
                    goto qq;
                }
            }
        }qq:
        for(int k=1;k<=2;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i==j)continue;
                if(x[i][j]==0){
                    if(fix[i]*fix[j] and c[i]==c[j]){ //printf("end1 %d %d\n",i,j);
                        f=0;
                        goto g;
                    }else if(fix[i]*(!fix[j])){
                        if(c[i]==1)c[j]=2;
                        else c[j]=1;
                        fix[j]=1;
                    }else if(fix[j]*(!fix[i])){
                        if(c[j]==1)c[i]=2;
                        else c[i]=1;
                        fix[i]=1;
                    }
                }
                //printf("%d %d=> ",i,j);for(int k=1;k<=n;k++)printf("%d ",fix[k]);printf("fix\n");
                //printf("%d %d=> ",i,j);for(int k=1;k<=n;k++)printf("%d ",c[k]);printf("\n");
            }
        }}g:
        //printf("fix =>");for(int k=1;k<=n;k++)printf("%d ",fix[k]);printf("\n");
        //printf("c   =>");for(int k=1;k<=n;k++)printf("%d ",c[k]);printf("\n");

        if(f)printf("YES\n");
        else printf("NO\n");
    }
	return 0;
}

