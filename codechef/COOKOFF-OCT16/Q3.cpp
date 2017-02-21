#include <bits/stdc++.h>
using namespace std;

long long a[100003];

int main() {
    
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,l1,l2,r1,r2;
        long long ans=999999,x;
        //char s1[100003],s2[100003];
        //scanf("%s%s",s1,s2);
        string s1,s2;
        cin>>s1>>s2;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(s1[i]==s2[j]){
                    l1=i;l2=j;
                    r1=(n-i-1);r2=m-j-1;
                    x=abs(l1-r2)+abs(l1-l2)+abs(l2-r1)+abs(r2-r1);
                    if(x<ans)ans=x;
                }
            }
        }
        printf("%lld\n",ans);
    }
    return 0;
}