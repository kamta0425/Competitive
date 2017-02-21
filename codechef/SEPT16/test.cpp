#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
#define len v.size()


int a[1000002],b[100002];       // Q 5 only for 2nd subtask
vector<int> primes;
vector< int > v;
int BSearch(int);

int get(int l,int r){
    if(len==0)return 1;
    int result=1,i,x;
    i=BSearch(l);
    while(i<len){
        x=v[i];
        if(x>r)break;
        result=max(result,primes[b[x]]);
        i++;
    }
    return result;
}
void update(int l,int r){
    if(len==0)return;
    int result=1,i,j,x;
    i=BSearch(l);
    while(i<len){
        x=v[i];
        if(x>r)break;
        a[x]/=primes[b[x]];
        if(a[x]==1){
            v.erase(v.begin()+x);
        }else{
            i++;
        }
        while((a[i]%primes[b[i]])!=0){
           b[x]++;
        }
    }
//printf("vector => ");for(int i=0;i<v.size();i++)printf("%d ",v[i]);cout<<endl;
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
    int n,x=1;
    //scanf("%d",&n);
    generatePrimes();

    for (int i=0;i<primes.size();i++){
        printf("%d ",primes[i]);
        //if(i%25==0)cout<<endl;
    }cout<<endl<<"len = "<<primes.size();

	return 0;
}
