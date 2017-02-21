#include <iostream>
using namespace std;

int s[200002],a[100002]; 

void segTree(int x,int y,int l,int r,int i){
    //printf("i=%d s=%d\n",i,s[i]);
    if(x<=l and r<=y){s[i]++;return;}
    if(y<l or r<x)return;
    if(l==r){s[i]++;return;}
    int m=(l+r)/2;
    segTree(x,y,l,m,2*i);
    segTree(x,y,m+1,r,2*i+1);
}
void solve(int l,int r,int p,int i){
    if(p!=0){
        s[i]+=s[p];
    }
    if(l==r){
        //printf("s=%d ",s[i]);
        if(s[i]%2==0)printf("%d ",a[r]);
        else if(a[r]==0)printf("0 ");
        else printf("1 ");
        return;
    }
    int m=(l+r)/2;
    solve(l,m,i,2*i);
    solve(m+1,r,i,2*i+1);
}

int main()
{
    int n,q,x,y;
    scanf("%d%d",&n,&q);
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    for(int i=0;i<q;i++){
        scanf("%d%d",&x,&y);
        segTree(x,y,1,n,1);
    }
    solve(1,n,0,1);
    return 0;
}
