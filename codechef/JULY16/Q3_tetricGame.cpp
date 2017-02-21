#include<iostream>
using namespace std;
#include<cstdio>
#include<vector>
#include<cstring>
#include<algorithm>

int a[10002],b[10002];
int n;

bool check(int big){
    int i,c[10002];
    memset(c,0,sizeof(c));
    if(a[0]!=big){
        if( (a[0]+b[0])==big)c[0]=1;
        else if( (a[0]+b[1])==big)c[1]=1;
        else if( (a[0]+b[0]+b[1])==big)c[0]=c[1]=1;
        else return false;
    }
    if(a[1]!=big){
        if( !c[0] and (a[1]+b[0])==big)c[0]=1;
        else if( (!c[0])*(!c[1]) and (a[1]+b[0]+b[1])==big)c[0]=c[1]=1;
        else if( (!c[0])*(!c[2]) and (a[1]+b[0]+b[2])==big)c[0]=c[2]=1;
        else if( !c[1] and (a[1]+b[1])==big)c[1]=1;
        else if( (!c[1])*(!c[2]) and (a[1]+b[1]+b[2])==big)c[1]=c[2]=1;
        else if( (!c[0])*(!c[1])*(!c[2]) and (a[1]+b[0]+b[1]+b[2])==big)c[0]=c[1]=c[2]=1;
        else if( !c[2] and (a[1]+b[2])==big)c[2]=1;
        else return false;
    }
    for(i=2;i<n-1;i++){
        if(!c[i-2])return false;
        if(a[i]!=big){
            if( !c[i-1] and (a[i]+b[i-1])==big)c[i-1]=1;
            else if( (!c[i-1])*(!c[i]) and (a[i]+b[i-1]+b[i])==big)c[i-1]=c[i]=1;
            else if( (!c[i-1])*(!c[i+1]) and (a[i]+b[i-1]+b[i+1])==big)c[i-1]=c[i+1]=1;
            else if( (!c[i-1])*(!c[i])*(!c[i+1]) and (a[i]+b[i-1]+b[i]+b[i+1])==big)c[i-1]=c[i]=c[i+1]=1;
            else if( !c[i] and (a[i]+b[i])==big)c[i]=1;
            else if( (!c[i])*(!c[i+1]) and (a[i]+b[i]+b[i+1])==big)c[i]=c[i+1]=1;
            else if( !c[i+1] and (a[i]+b[i+1])==big)c[i+1]=1;
            else return false;
        }
    }
    if(a[i]!=big){
        if(!c[i-2])return false;
        if(!c[i-1] and (a[i]+b[i-1])==big)c[i-1]=1;
        else if( (!c[i-1])*(!c[i]) and (a[i]+b[i]+b[i-1])==big)c[i-1]=c[i]=1;
        else if(!c[i] and (a[i]+b[i])==big)c[i]=1;
        else return false;
    }
    return true;
}
long long check2(){
    long long ans=-1;
    if((a[0]+b[0])==(a[1]+b[1]))ans=(a[0]+b[0]);
    else if((a[0]+b[1])==(a[1]+b[0]))ans=(a[0]+b[1]);
    else if( a[0]==(a[1]+b[0]+b[1]))ans=a[0];
    else if( a[1]==(a[0]+b[0]+b[1]))ans=a[1];
    printf("%lld\n",ans);
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        vector<int> v;
        long long sum=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&b[i]);
            sum+=b[i];
        }
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        if (n==1){
            printf("%d\n",a[0]+b[0]);
            continue;
        }
        if (n==2){
            check2();
            continue;
        }
        if(sum%n!=0){
            printf("-1\n");
            continue;
        }
        long long ans=-1;
        int x=int(sum/n);
        if( check(x) )ans=x;
        printf("%lld\n",ans);
    }
return 0;
}

