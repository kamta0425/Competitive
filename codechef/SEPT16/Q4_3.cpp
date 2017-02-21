#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <set>
#include <vector>
using namespace std;
                            // Q 4_1 optimized
int x[1002][1002],c[1002],fix[1002],cnt[1002],n,m;
vector<int> v1,v2;
int solve(int,vector<int> []);
void solveforfix(int,int,vector<int>,vector<int>);

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,f=1,ct=0,mm=0;
        vector<int> v[1002];

        memset(x,0,sizeof(x));
        scanf("%d%d",&n,&m);
        for(int i=1;i<=m;i++){
            scanf("%d%d",&a,&b);
            x[a][b]=x[b][a]=1;
        }
        for(int i=1;i<=n;i++)cnt[i]=c[i]=fix[i]=0;
        v1.clear();v2.clear();

        if(n<=2){printf("YES\n");
        continue;}
        if(m==0){printf("NO\n");
        continue;}

        int ii=0,jj=0;
        for(int i=1;i<=n;i++){ //printf("v[%d]=> ",i);
            for(int j=1;j<=n;j++){
                if(i==j)continue;
                if(x[i][j]==1){   //printf("%d ",v[i][j]);
                    cnt[i]++;ct++;
                    v[i].push_back(j);v[j].push_back(i);
                }
            } //printf("\n");
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i==j)continue;
                if(x[i][j]==0){
                    fix[i]=fix[j]=1;
                    c[i]=1;c[j]=2;
                    ii=i;jj=j;
                    goto q;
                }
            }
        }q:
        ct=ct/2;
        if(n%2==0){
          mm=(n/2)*((n/2)-1);
        }else{
            mm=( (n-1)*(n-1) )/4;
        }
    //printf("coutn %d mm %d ",ct,mm);
        if(ct<mm){printf("NO\n");
        continue;}

        if(ii=0 and jj==0)goto g;
        for(int k=1;k<=2;k++){
            f=solve(k,v);
            if(f==0)goto g;
        }

        for(int k=1;k<=n;k++){
            if(!fix[k])v1.push_back(k);
            else v2.push_back(k);
        }
        if(v1.size()>0 and v2.size()>0){
            sort(v1.begin(),v1.end());
            sort(v2.rbegin(),v2.rend());
            int i=v2[0],j=v1[0];
            if(x[i][j]==0){
                c[j]=(c[i]==1)?2:1;
            }else{
                c[j]=(c[i]==1)?1:2;
            }
            fix[j]=1;
            v1.clear();v2.clear();
            f=solve(2,v);
            if(f==0)goto g;
        }
        g:
    printf("fix =>");for(int k=1;k<=n;k++)printf("%d ",fix[k]);printf("\n");
    printf("c   =>");for(int k=1;k<=n;k++)printf("%d ",c[k]);printf("\n");

        if(f)printf("YES\n");
        else printf("NO\n");
    }
	return 0;
}

int solve(int k,vector<int> v[]){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j)continue;
            if(x[i][j]==0){
                if(fix[i]*fix[j] and c[i]==c[j]){ //printf("end1 %d %d\n",i,j);
                    return 0;
                }else if(fix[i]*(!fix[j])){
                    if(c[i]==1)c[j]=2;
                    else c[j]=1;
                    fix[j]=1;
                }else if(fix[j]*(!fix[i])){
                    if(c[j]==1)c[i]=2;
                    else c[i]=1;
                    fix[i]=1;
                }else if( (!fix[j])*(!fix[i])){
                    solveforfix(i,j,v[i],v[j]);
                }
            }
        //printf("%d %d=> ",i,j);for(int k=1;k<=n;k++)printf("%d ",fix[k]);printf("fix\n");
        //printf("%d %d=> ",i,j);for(int k=1;k<=n;k++)printf("%d ",c[k]);printf("\n");
        }
    }
    return 1;
}

void solveforfix(int i,int j,vector<int> v1,vector<int> v2){
    int s1=0,s2=0;
    if(c[i] < c[j]){
       for(int k=0;k<v1.size();k++){
           if( fix[v1[k]] ){
               if(c[v1[k]]==1)s1++;
               else s2++;
           }
       }
       fix[i]=fix[j]=1;
       c[i] = (s1>s2)? 1:2 ;
       c[j] = (c[i]==2)? 1:2 ;
    }else{
        for(int k=0;k<v2.size();k++){
           if( fix[v2[k]] ){
               if(c[v2[k]]==1)s1++;
               else s2++;
           }
       }
       fix[i]=fix[j]=1;
       c[j] = (s1>s2)? 1:2 ;
       c[i] = (c[j]==2)? 1:2 ;
    }
}


/*
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <set>
#include <vector>
using namespace std;
                            // Q 4_1 optimized
int x[1002][1002],c[1002],fix[1002],cnt[1002],n,m;
vector<int> v1,v2;
int solve();

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,f=1;
        memset(x,0,sizeof(x));
        scanf("%d%d",&n,&m);
        for(int i=1;i<=m;i++){
            scanf("%d%d",&a,&b);
            x[a][b]=x[b][a]=1;
        }
        for(int i=1;i<=n;i++)cnt[i]=c[i]=fix[i]=0;
        v1.clear();v2.clear();

        if(n<=2){printf("YES\n");continue;}
        if(m==0){printf("NO\n");continue;}

        int ii=0,jj=0,flag=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i==j)continue;
                if(x[i][j])cnt[i]++;
                if(flag and x[i][j]==0){
                    fix[i]=fix[j]=1;
                    c[i]=1;c[j]=2;
                    ii=i;jj=j;flag=0;
    //printf("i,j=%d,%d\n",i,j);
                    goto q;
                }
            }
        }q:
    //printf("hello\n");
        if(ii=0 and jj==0)goto g;
        for(int k=1;k<=2;k++){
            f=solve();
            if(f==0)goto g;
        }

        for(int k=1;k<=n;k++){
            if(!fix[k])v1.push_back(k);
            else v2.push_back(k);
        }
        while( v1.size()>0 ){
            sort(v1.begin(),v1.end());
            sort(v2.rbegin(),v2.rend());
            int i=v2[0],j=v1[0];
            if(x[i][j]==0){
                c[j]=(c[i]==1)?2:1;
            }else{
                c[j]=(c[i]==1)?1:2;
            }
            fix[j]=1;
            v1.clear();v2.clear();
            f=solve();
            if(f==0)goto g;
            for(int k=1;k<=n;k++){
                if(!fix[k])v1.push_back(k);
                else v2.push_back(k);
            }
        }
        g:
    printf("fix =>");for(int k=1;k<=n;k++)printf("%d ",fix[k]);printf("\n");
    printf("c   =>");for(int k=1;k<=n;k++)printf("%d ",c[k]);printf("\n");

        if(f)printf("YES\n");
        else printf("NO\n");
    }
	return 0;
}

int solve(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j)continue;
            if(x[i][j]==0){
                if(fix[i]*fix[j] and c[i]==c[j]){ //printf("end1 %d %d\n",i,j);
                    return 0;
                }else if(fix[i]*(!fix[j])){
                    if(c[i]==1)c[j]=2;
                    else c[j]=1;
                    fix[j]=1;
                }else if(fix[j]*(!fix[i])){
                    if(c[j]==1)c[i]=2;
                    else c[i]=1;
                    fix[i]=1;
                }else if( (!fix[i])*(!fix[j]) ){
                    //if( i<j)printf("not fix %d %d \n",i,j);
                }
            }
        //printf("%d %d=> ",i,j);for(int k=1;k<=n;k++)printf("%d ",fix[k]);printf("fix\n");
        //printf("%d %d=> ",i,j);for(int k=1;k<=n;k++)printf("%d ",c[k]);printf("\n");
        }
    }
    return 1;
}
*/
