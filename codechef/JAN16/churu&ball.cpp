#include<cstdio>
#include <iostream>
using namespace std;
int a[100000];

inline int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int i,n;
        long long int s=0;
        scanf("%d",&n);
        scanf("%d",&a[0]);
        if(a[0]==1) a[0]++,s++;
        for(i=1;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i-1]>a[i]){
                s+=a[i-1]-a[i];
                a[i]=a[i-1];
            }
        }
        if(n==1){
           printf("0\n");continue;
        }
        int x=2,f=0;
        for(i=2;i<=a[0];i++){
           if(a[0]%i==0 and a[1]%i==0){
               x=i;break;
           }
        }
        for(i=2;i<n ;i++){
            if( a[i]%x!=0 ){
              f=3;break;
            }
        }
        if(f!=3){
          printf("%d\n",s);continue;
        }
        if(a[0]%2!=0 or a[0]%3!=0 or a[0]%5!=0){
          a[0]++;s++;
        }
        x=2;
        while( gcd(a[0],a[1]) ==1 ){
            a[1]++;s++;
        }
        while( a[0]%x!=0 or a[1]%x!=0 ){
            x++;
        }
        for (i=2;i<n;i++){
            while (a[i]%x!=0){
                a[i]++;s++;
            }
        }
        printf("%lld\n",s);
    }
	return 0;
}
