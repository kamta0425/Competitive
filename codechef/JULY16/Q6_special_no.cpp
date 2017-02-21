#include<iostream>
using namespace std;
#include<cstdio>
#include<vector>
#include<set>
#include<cstring>
#include<algorithm>
#define ll long long

ll solve1(ll l,ll r,int k){
    ll ans=0;
    for(ll i=l;i<=r;i++){
        ll x=i,c=0;
        set<int> s;
        while(x>0){
            if(x%10!=0)s.insert(x%10);
            x/=10;
        }
        for (set<int>::iterator b = s.begin(); b!=s.end();b++){
            if(i%(*b)==0)c++;
        }
        if(c>=k)ans++;
    }
    return ans;
}


int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        ll x,y,ans=0;
        int a;
        scanf("%lld%lld%d",&x,&y,&a);
        printf("%lld\n",solve1(x,y,a) );
    }
return 0;
}

