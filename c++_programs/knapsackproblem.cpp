#include<iostream>
#include<cstdio>
#include<string>
#include<set>
using namespace std;


int main() {
        int t;
        scanf("%d",&t);
        while(t--){
            //memset(dp,0,sizeof(dp));
            int dp[1001]={0};
            int n,price[101];

            printf("Enter size of cutting piece length of rod for max price : ");
            scanf("%d",&n);
            for(int i=0;i<=n;i++)cout<<dp[i]<<" ";cout<<endl;
            printf("Enter prices for cutting pieces : \n");
            for(int i=1;i<n;i++) scanf("%d",&price[i]);
            dp[1]=price[1];
            for(int i=2;i<=n;i++)
            {
                for(int j=1;j<=i;j++){
                    dp[i]=max(dp[i-j]+price[j],dp[i]);
                }
            }
             for(int i=0;i<=n;i++)cout<<dp[i]<<" ";cout<<endl;
            printf("Maximum price for %d length rod is %d\n",n,dp[n]);
        }


	return 0;
}
