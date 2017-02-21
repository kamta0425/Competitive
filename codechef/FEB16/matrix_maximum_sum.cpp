#include<cstdio>
#define mod 1000000007
#define ll long long
#define N 10002
#define f(i,d,x) for(int i=d;i<=x;i++)

int a[N],b[N];
ll c[N][N];

int main(){        ///Question 6 TLE this programme
    int n;
    scanf("%d",&n);
    f(i,1,n)scanf("%d",&a[i]);
    f(i,1,n)scanf("%d",&b[i]);
    int ans=0;
    f(i,1,n)
        f(j,1,n){
            c[i][j]=( (a[i]*b[j])%mod+(i*j)%mod+(a[i]*j)%mod+(b[j]*i)%mod )%mod;
            ans+=c[i][j];
        }
    printf("%d ",ans%mod);
    f(k,2,n){
        ll v=0;
        f(ii,1,n+1-k)
            f(jj,1,n+1-k){
                ll g=c[ii][jj];
                f(i,1,ii+k-1)
                    f(j,1,jj+k-1)
                        if(g<c[i][j])g=c[i][j];
                v+=(g%mod);
            }
        printf("%d ",v%mod);
    }
return 0;
}
