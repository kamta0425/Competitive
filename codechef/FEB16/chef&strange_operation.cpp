#include<cstdio>
#define mod 1000000007
#define ll long long

long long int a[100005];

ll modInverse(ll x,ll y){
    if (y == 0)return 1;
    ll p = modInverse(x, y/2) % mod;
    p = (p * p) % mod;
    return (y%2 == 0)? p : (x * p) % mod;
}

int main(){               ///accepted
    int t;
    scanf("%d",&t);
    while(t--){
        ll n,m,x;
        scanf("%lld %lld %lld",&n,&x,&m);
        for(int i=1;i<=n;i++){
            scanf("%lld",&a[i]);
        }
        ll ans=a[x],coeff=1,b=1,c=1;
        for(ll i=2;i<=x;i++){
            c= ( (c%mod) * ((m+i-2)%mod) )%mod;
            b= ( (b%mod) * ( (i-1)%mod ) )%mod;
            coeff=( (c%mod) * (modInverse(b,mod-2)%mod) )%mod;
            ans+=(coeff *( a[x+1-i] % mod) )%mod;
        }
        printf("%lld\n",ans%mod);
    }
}

/*#include <cstdio>
#define mod 1000000007
#define ll long long

long long a[100005];

ll modInverse(ll x,ll y)
{
    if (y == 0)
        return 1;
    ll p = modInverse(x, y/2) % mod;
    p = (p * p) % mod;
    return (y%2 == 0)? p : (x * p) % mod;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        ll n,m,x;
        scanf("%lld %lld %lld",&n,&x,&m);
        for(int i=1;i<=n;i++){
            scanf("%lld",&a[i]);
        }
        ll ans=a[x],coeff=1;
        for(ll i=2;i<=x;i++){
            coeff= ( (coeff%mod) * ((m+i-2)%mod)  )%mod;
            coeff= ( coeff *( modInverse(i-1,mod-2)%mod))%mod;
            ans+=  ( coeff *( a[x+1-i] % mod)     )%mod;
            ans = ans%mod;
        }
        printf("%lld\n",ans);
    }
}
*/
