#include <iostream>
#include <cstdio>
#include <algorithm>
#include<vector>
using namespace std;
                            // Q 3
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x=-1,y=-1,z=-1,c,temp=-1,k;
        scanf("%d",&n);
        if(n==1){
            printf("chef\n");
            continue;
        }
        for(int i=1;i<=n;i++){
            scanf("%d",&c);
            int typ[]={0,0,0,0,0,0},l=6;
            for(int j=1;j<=c;j++){
                scanf("%d",&k);
                typ[k-1]++;
            }
            sort(typ,typ+6);
            temp=0;
            temp+=(4*typ[0]);
            temp+=(2*(typ[1]-typ[0]));
            temp+=(typ[2]-typ[1]);
            if(temp>=x){
                y=x;
                x=temp;
                z=i;
            }
        }
        if(y==x)z=-1;
        if(z==1)printf("chef\n");
        else if(z==(-1))printf("tie\n");
        else printf("%d\n",z);
    }
	return 0;
}
