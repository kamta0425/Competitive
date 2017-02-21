#include <iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<set>
#include<cmath>
using namespace std;

int gcd ( int a, int b ){
  if ( a==0 ) return b;
  return gcd ( b%a, a );
}

int main() {            // incomplete not solved
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,k,l,x;
	    long long ans=0,m=1000000007;
	    int a[50];
	    set<int> s,s2;
	    scanf("%d%d%d",&n,&k,&l);
	    for(int i=0;i<n;i++){
	        scanf("%d",&x);  
	        s.insert(x);
	    } 
	    set<int>::iterator it1,it2;
	    for(it1=s.begin(); it1!=s.end(); ++it1){
	        printf("%d ",*it1);
	        for(it2=it1; it2!=s.end(); ++it2){
	            x=gcd( (*it1) , (*it2) );
	            if(s.find(x) == s.end())s1.insert(x);
	        }
	    }
	    if(s1.empty())ans=nCr(n,k)%m;
	    
        //printf("%d\n",ans);
        //printf("a= ");for(int i=0;i<n;i++)printf("%d ",a[i]);printf("\n");
	}
	return 0;
}












