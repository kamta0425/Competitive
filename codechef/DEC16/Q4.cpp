#include<bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define pii pair<int,int>

class Obj{
    public:
    int data,i;
    long long x;
};
int n,mm,e,len,start,endd,dp[10002][10002];
Obj r[100002];
vector< pair< pii,pii > > v;
/*
int getAns1(long long p){
    int lt=1,rt=n,m;
    while(true){
        if(r[rt-1].x+1<=p and p<=r[rt].x){
            start=r[rt].i;
            endd= n-(p-r[rt-1].x-1);
            break;
        }
        if(lt>rt){
            start=r[lt].i;
            endd= n-(p-r[lt-1].x-1);
            break;
        }else if(lt==rt-1){
            if(p<r[lt].x){
                start=r[lt].i;
                endd= n-(p-r[lt-1].x-1);
            }else if(r[lt].x==p){
                start=endd=r[lt].i;
            }else if(r[rt].x==p){
                start=endd=r[rt].i;
            }else {
                start=r[rt].i;
                endd= n-(p-r[rt-1].x-1);
            }break;
        }else if(lt==rt){
            if(r[lt].x==p){ 
                start=endd=r[lt].i;
            }else {
                start=r[rt].i;
                endd= n-(p-r[rt-1].x-1);
            }break;
        }
        m=(lt+rt)/2;
        if(p<=r[m].x)rt=m;
        else lt=m+1;
    }
    //printf("start=%d end=%d\nleft=%d right=%d\n",start,endd,lt,rt);
    return dp[start][endd];
}*/
int getAns(long long p,int lt,int rt){
    int m,s,e;
    if(r[lt-1].x+1<=p and p<=r[lt].x){
        s=r[lt].i;
        e= n-(p-r[lt-1].x-1);
        return dp[s][e];
    }else if(r[rt-1].x+1<=p and p<=r[rt].x){
        s= r[rt].i;
        e= n-(p-r[rt-1].x-1);
        return dp[s][e];
    }
    m=(lt+rt)/2;
    if(r[m-1].x+1<=p and p<=r[m].x){
        s= r[m].i;
        e= n-(p-r[m-1].x-1);
        return dp[s][e];
    }
    if(p<=r[m-1].x)rt=m-1;
    else lt=m+1;
    return getAns(p,lt,rt);
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long p;
        scanf("%d %d",&n,&mm);
        v.clear();
        for (int i=1;i<=n;i++){
            scanf("%d",&e);
            dp[i][i]=r[i].data=e;
            r[i].i=i;
        }
        for (int i=1;i<=n;i++)         //set dp matrix
            for (int j=i+1;j<=n;j++)
                dp[i][j]=max(dp[i][j-1],r[j].data);

        sort(r+1,r+n+1, [](const Obj &x, const Obj &y) {
            return x.data > y.data;
        });
        
        r[1].x=n-r[1].i+1;
        //v.push_back( { {1,r[1].x},{r[1].i,n-(p-r[rt-1].x-1)} } );
        for (int i=2;i<=n;i++){                 // calculating x here
            r[i].x=r[i-1].x + (n-r[i].i+1);
        }
        
        for(int i=1;i<=mm;i++){
            scanf("%lld",&p);
            //printf("%d\n",getAns(p));
            printf("%d\n",getAns(p,1,n));
        }
    }
    return 0;
}