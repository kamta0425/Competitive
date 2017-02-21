#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int a[250002],qq[250002];
int m=786433,n,q;

int main(){
 
    scanf("%d",&n);
    for (int i=0;i<=n;i++)scanf("%d",&a[i]);
    scanf("%d",&q);
    for (int i=0;i<q;i++)scanf("%d",&qq[i]);
    
    long long ans=0;
    
    for (int j=0;j<q;j++){
        ans=a[0]%m;
        int t=qq[j]%m;
        long long x=1;
        for (int i=1;i<=n;i++){
            x=((x%m)*t)%m;
           ans=( ans + (a[i]%m)*x)%m;
        }
        printf("%d\n",(int)ans);
    }
    return 0;
    
} 