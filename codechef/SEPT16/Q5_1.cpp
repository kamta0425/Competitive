#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int n,x=1000002,len,a[1000002]; ///problem here 10pow6          // Q 5
vector<int> v[100002];
vector<int> primes;

int get(int l,int r){
    int result=1;
    for (int i=l;i<=r;i++){
        if(v[i].size()==0)continue;
        result=max(result,v[i][0]);
    }
    return result;
}
void update(int l,int r){
    for (int i=l;i<=r;i++){
        if(v[i].size()==0)a[i]=1;
        else if(a[i]!=1){
            a[i]/=v[i][0];
            v[i].erase(v[i].begin());  //check here
        }
    }
    /*for(int i=1;i<=n;i++){
        printf("v[%d] = ",i);
        for(int k=0;k<v[i].size();k++)
            printf("%d ",v[i][k]);
        printf("\n");
    }*/
}
void generatePrimes(){
    int i,j;
    for (i=0;i<x;i++)a[i]=1;
    a[0]=a[1]=0;
    for (i=2;i*i<x;i++) {
        if(a[i]==1){
            for(j=2*i;j<=x;j+=i)
                a[j] = 0;
        }
    }
    for (i=0;i<x;i++)
        if (a[i]==1)
            primes.push_back(i);       // 2 3 5 7 11 13 ....
    //for (i=0;i<j;i++) printf("%d ",primes[i]); // i(0 ot 94) j=95
}
void solve(){
    for(int k=1;k<=n;k++){
        v[k].resize(0);
        int num=a[k];
        for (int i=0;i<len and primes[i]<=num;i++){ // check index out of bound
            int z=primes[i];
            while (num%z == 0){
                num = num/z;
                v[k].push_back(z);
                if(num==1)break;
            }
            if(num==1)break;
        }
    }
    /*for(int i=1;i<=n;i++){
        printf("v[%d] = ",i);
        for(int k=0;k<v[i].size();k++)
            printf("%d ",v[i][k]);
        printf("\n");
    }*/
}
int main() {
    //generatePrimes();
    //len=primes.size();
    int t;
    scanf("%d",&t);
    while(t--){
        int m,l,r,c;
        scanf("%d%d",&n,&m);
        for(int i=1;i<=n;i++)scanf("%d",&a[i]);
        solve();
        for(int i=1;i<=m;i++){
           scanf("%d %d %d",&c,&l,&r);
           if(c==0)update(l,r);
           else printf("%d ",get(l,r));
        }printf("\n");
    }
	return 0;
}
