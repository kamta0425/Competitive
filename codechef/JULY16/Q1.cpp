#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long sum=0;
        int n,x,f=0,g=1;
        scanf("%d",&n);
        for (int i=0;i<n;i++){
            scanf("%d",&x);
            if(x==5)f=1;
            if(x==2)g=0;
            sum+=x;
        }   
        if(sum>=4*n and f*g){
            printf("Yes\n");    
        }else{
            printf("No\n");
        }
    }
    return 0;
    
}