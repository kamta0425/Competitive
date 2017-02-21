#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

char a[12347];
                  // Q2
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,ans,x,l,f=0;
        scanf("%s",a);
        l=strlen(a);
        if(l%2==0)x=l/2;
        else x=(l+1)/2;
        for(int i=0;i<x;i++){
            if(a[i]==a[l-1-i] and a[i]=='.')a[i]='a';
            if(a[i]=='.' or a[l-1-i]=='.'){
                if(a[i]=='.' and a[l-1-i]=='.')a[i]=a[l-1-i]=='a';
                else if(a[i]=='.')a[i]=a[l-1-i];
                else a[l-1-i]=a[i];
                continue;
            }
            if(a[i]!=a[l-1-i]){f=1;break;}
        }
        if(!f)printf("%s\n",a);
        else printf("%d\n",-1);
    }
	return 0;
}
