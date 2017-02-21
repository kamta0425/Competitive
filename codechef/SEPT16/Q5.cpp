#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
#define len v.size()

int a[100002],b[100002],pLen,n;       // Q 5
vector<int> primes;
vector<int> v;
int BSearch(int);

int get(int l,int r){
    if(v.size()==0)return 1;
    int result=1,i,x;
    i=BSearch(l);
    while(i<v.size()){
        x=v[i];
        if(x>r )break;
        if(b[x]<pLen)result=max(result,primes[b[x]]);
        else result=max(result,a[x]);
        i++;
    }
    return result;
}

void update(int l,int r){
    if(v.size()==0)return;
    int result=1,i,x;
    i=BSearch(l);
    while(i<v.size()){
        x=v[i];
        if(x>r)break;
        if(b[x]>=pLen)a[x]=1;
        else a[x]=(a[x]/primes[b[x]] );
        if(a[x]==1){
            v.erase(v.begin()+i);
        }else{
            i++;
            while((a[x]%primes[b[x]])!=0){
                b[x]++;
                if(b[x]>=pLen)break;
            }
        }
    }
//printf("v => ");for(int i=0;i<len;i++)printf("%d ",v[i]);cout<<endl;
//printf("a => ");for(int i=1;i<=n;i++)printf("%d ",a[i]);cout<<endl;
//printf("b => ");for(int i=1;i<=n;i++)printf("%d  ",b[i]);cout<<endl;
}

int BSearch(int key){
    int m,l=0,r=len-1;
    while(l<=r){
        m=(l+r)/2;
        if(key==v[m] )return m;
        else if(v[m]<key)l=m+1;
        else r=m-1;

        if(key==v[l] )return l;
        if(key==v[r] )return r;
    }
    return l;
}
void generatePrimes(){
    int i,j,k,z,x=998;
    for (i=2;i<x;i++)primes.push_back(i);
    for (i=0;i<primes.size();i++) {
        j=i+1;z=primes[i];
        k=z*z;
        while(j<primes.size()){
            if(primes[j]==k){
                primes.erase(primes.begin()+j);
                k+=z;
            }else if(k<primes[j]){
                k+=z;
            }
            else j++;
        }
    }
}

int main() {
    int t;
    scanf("%d",&t);
    generatePrimes();
    pLen=primes.size();
    while(t--){
        int m,l,r,c,ans=1;
        v.clear();
        scanf("%d%d",&n,&m);
        for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
            if(a[i]==1)continue;
            v.push_back(i);
            b[i]=0;
            while( (a[i]%primes[b[i]])!=0){
                b[i]++;
                if(b[i]>=pLen){
                    break;
                }
            }
        }
//printf("a => ");for(int i=1;i<=n;i++)printf("%d ",a[i]);cout<<endl;
//printf("b => ");for(int i=1;i<=n;i++)printf("%d  ",b[i]);cout<<endl;
        for(int i=1;i<=m;i++){
           scanf("%d %d %d",&c,&l,&r);
           if(c==0){
               update(l,r);
           }
           else {
               ans=get(l,r);
               printf("%d ",ans);
               ///printf("ans=%d \n",ans);
            }
        }printf("\n");
    }
	return 0;
}
