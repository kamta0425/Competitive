#include<iostream>
using namespace std;
#include<cstdio>
#include <algorithm>
#include<set>
#include<cstring>

int x[10005];
vector<int> v;
set<int> s[1005][1005];

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        v.resize(0);
        set<int> s1;
        long long ans=0;
        scanf("%d",&n);

        for(int i=1;i<=n;i++)scanf("%d",&x[i]);
        if(n==1){printf("0\n");continue;}
        if(n==2){if(x[1]==x[2])printf("0\n");else printf("1\n");continue;}
        
        for(int i=1;i<=n;i++){
            for(int j=i;j<=n;j++){
              s[i][j].clear();
              if(i!=j)s[i][j]=s[i][j-1];
              s[i][j].insert(x[j]);
            }
        }
        for(int a=1;a<n;a++){
            for (int b=a;b<n;b++){
                int count=0;
                for (int c=b+1;c<=n;c++){
                    v.resize(0);
                    /*for (int d=c;d<=n;d++){
                        v.resize(0);
                        set_intersection(s[a][b].begin(), s[a][b].end(), s[c][d].begin(), s[c][d].end(),back_inserter(v));
                        if(v.size()==0)ans++;
                        else break; 
                    }*/
                    s1.clear();
                    s1.insert(x[c]);
                    set_intersection(s[a][b].begin(), s[a][b].end(), s1.begin(), s1.end(),back_inserter(v));
                    if(v.size()==0)count++;
                    else{
                        ans+=((count*(count+1))/2);
                        count=0;
                    }
                }
                if(count!=0)ans+=((count*(count+1))/2);
            }
        }
        printf("%lld\n",ans);
        
        /*for(int i=1;i<=n;i++){
            for(int j=i;j<=n;j++){
              printf("%d%d=> ",i,j);
              for(set<int>::iterator k=s[i][j].begin();k!=s[i][j].end();k++)printf("%d ",*k);
              printf("\n");
            }
        }*/
    }
return 0;
}
