#include <iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;

int a[105];

int main() {  
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,n,k,ans=0;
	    scanf("%d%d",&n,&k);
	    if(n==1){ printf("0\n");continue;}
	    memset(a,0,sizeof(a));
	    for(int i=1;i<=n;i++){
	        scanf("%d",&x);
	        if(x==i)a[i]=(-1);
	        else if(a[x]!=(-1) )a[x]++;
	    }
	    //for(int i=1;i<=n;i++)printf("%d ",a[i]);printf("\n");
	    for(int i=1;i<=n;i++){
	        if(a[i]>=k)ans++;
	    }
        printf("%d\n",ans);
	}
	return 0;
}