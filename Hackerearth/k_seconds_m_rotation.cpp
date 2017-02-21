#include <bits/stdc++.h>
using namespace std;
   
set<int> a;
vector<int> v;
set<int>::iterator it,it1;
int gcd(int a,int b){
    if (b==0)return a;
    return gcd(b,a%b);
}

int main()
{
   int n,ans,q,m,x;
   scanf("%d%d",&n,&q);
   for(int i=0;i<n;i++){
       scanf("%d",&x);
       a.insert(x);
   }
   for(it=a.begin();it!=a.end();it++){
        it1=it;
        it1++;
        int f=0;
        for(;it1!=a.end();it1++){
            if( (*it1)% (*it)==0){f=1;break;}
        }
        if(f)continue;
        v.push_back(*it);
    }
   while(q--){
    scanf("%d",&m);
    ans=gcd(m,v[0]);
    for(int i=1;i<v.size();i++){
       ans=max(ans,gcd(m,v[i]));
    }
    printf("%d\n",ans);
   }
   
   return 0;
}
