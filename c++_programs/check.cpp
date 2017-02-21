#include<iostream>
#include<iomanip>
#include<math.h>
#include<string.h>
#include<stdio.h>
#include<list>
#include<cstring>
#include<vector>
#include<ctime>
using namespace std;


#include <iostream>
#include<cstdio>
using namespace std;

int main() {
        int t;
        scanf("%d",&t);
        while(t--){
            int n,r,a[101];
            //scanf("%d%d%d",&x,&y,&z);
            //printf("%d\n",x^y^z);
            scanf("%d",&n);
            for(int i=0;i<n;i++) scanf("%d",&a[i]);
            r=a[0];
            for(int i=1;i<n;i++)
            {
            }printf("%d\n",r);
        }


	return 0;
}

#define mod 1000000007
#define mode 11
#define ll long long
long long int a[100005];

void scanint(long long int &x)
{   register long long int c = getchar();
    x = 0;
    for(;(c<48 || c>57);c = getchar());
    for(;c>47 && c<58;c = getchar())
    { x = (x<<1) + (x<<3) + c - 48; }
}
ll modInverse(ll x,ll y)
{
    if (y == 0)
        return 1;
    ll p = modInverse(x, y/2) % mod;
    p = (p * p) % mod;
    return (y%2 == 0)? p : (x * p) % mod;
}

/*pair<ll, pair<ll, ll> > extendedEuclid(ll a ,ll b) {
    if(a == 0) return make_pair(b, make_pair(0, 1));
    pair<ll, pair<ll, ll> > p;
    p = extendedEuclid(b % a, a);
    return make_pair(p.first, make_pair(p.second.second - p.second.first*(b/a), p.second.first));
}

ll modInverse(ll a) {
    return (extendedEuclid(a,mod).second.first + mod) % mod;
}*/
