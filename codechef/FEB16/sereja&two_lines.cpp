#include <cstdio>
#include <vector>
#include<algorithm>
using namespace std;

#define sz 10002
#define fr(i,x) for(int i=0;i<x;i++)

vector<int> v;
int a[sz][sz];

int count(){
    int g=v[0],s=0,x=-1;
    for(int i=0;i<v.size();i++){
        if(g==v[i])s++;
        else{
            g=v[i];
            if(s>x)x=s;
            s=1;
        }
    }
    if(s>x)return s;
    return x;
}

int main() {
    int t;
	scanf("%d",&t);
	while(t--){
        int row,col;
        scanf("%d %d",&row,&col);
        for(int i=0;i<row;i++)
            for(int j=0;j<col;j++){
                scanf("%d",&a[i][j]);
            }
        int ans=-1,x;
        fr(i,row)
        fr(j,col){
            v.clear();
            fr(k,row)v.push_back(a[k][j]);
            fr(k,col){if(k==j)continue;
                v.push_back(a[i][k]);
            }
            sort(v.begin(),v.end());
            x=count();
            if(x>ans)ans=x;
        }
        printf("%d\n",ans);
	}
	return 0;
}
