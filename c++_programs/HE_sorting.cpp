#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector< pair<int, int > > v; 
int main(){
	int n,a,b;
	cin>>n;
	for(int i=0;i<n;i++){
	  cin>>a>>b;
	  v.push_back(make_pair(a,b));
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n-1;i++){
		int j=i+1,f=0;
		for(;j<n;j++){
		   if(v[i].first!=v[j].first){f=1;break;}
		}
		if(f){
		    if(j<=n)j--;
		}
		int x=j-i+1;
		if(x>1)
		sort(v.begin()+i,v.end()+i+x,greater<pair<int, int> >());
        i=j;
	}
	for(int k=0;k<n;k++)
	  cout<<v[k].first<<" "<<v[k].second<<endl;
	  return 0;
}