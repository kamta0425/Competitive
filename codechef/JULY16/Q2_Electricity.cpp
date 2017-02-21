#include<cstdio>
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[100010];
        int n,d[100010];
        vector<int> v;
        scanf("%d%s",&n,s);
        for (int i=0;i<n;i++){
            scanf("%d",&d[i]);
            if(s[i]=='1')v.push_back(i);
        }
        if(n==1){printf("%d\n",0);continue;}
        int i,a=v.size();
        long long ans=0;
        
        for (int i=v[0]-1;i>=0;i--) ans+=d[i+1]-d[i]; //left of l    printf("ir=%d\n",i),
        for (int i=v[a-1]+1;i<n;i++)ans+=d[i]-d[i-1]; //right of r
        
        if(a==1){printf("%lld\n",ans);continue;}
        
        for ( i=0;i<a-1;i++){
           int sum=0,m=0,l=v[i],r=v[i+1];
           if(l+1==r)continue;
            for (int j=l;j<r;j++){
                sum+=d[j+1]-d[j];
                m=max(m,d[j+1]-d[j]);
            }
            ans+=(sum-m);
        }
        printf("%lld\n",ans);
    }
    return 0;
    
}