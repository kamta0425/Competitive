#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    vector<int>::iterator it;
    ///pair<int,int> p = *it;
    vector<int> v(10,1);
    vector<pair<int,int> > v;
    vector<pair<pair<int, int>, pair<int, int> > > v;
    v.push_back(10);
    v.push_back(make_pair(10,5));
    v.push_back({4,2});
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.erase(v.begin(),v.begin()+4);///v.erase(v.begin(),v.end()-3);///v.erase(v.begin()+n);
    v[i].erase(v[i].begin()); ///erase only 1st element
    v.clear();
    scanf("%d %d",&l,&r);
    v.resize(5);
   for(int i=0;i<g.size();i++)
   {scanf("%d%d%d%d",&g[i].first.first,&g[i].first.second,&g[i].second.first,&g[i].second.second);
   }
   sort(g.begin(),g.end());
   printf("\n");
   for(int i=0;i<g.size();i++)
   {printf("%d %d %d %d\n",g[i].first.first,g[i].first.second,g[i].second.first,g[i].second.second);
   }
   v.push_back({{5,4},5});  ///for vector< pair< pair<int,int>,int> > v;
   v.push_back({{45,78},7});
   cout<<v[1].first.second<<" "<<v[1].second;

   //int t =floor(-3.32);
   ///vector<int>::iterator it = find(v.begin(), v.end(), 10);
   // if( find(v.begin(), v.end(),10)!= v.end())
    for(vector<int>::iterator i=v.begin();i<v.end();i++)
        printf("%d ",(*i));
    vector<int>::iterator i= find(v.begin(), v.end(),40);
    if(i!=v.end())
    printf("\n%d %d ",sizeof(v),v.size());
    if(v.empty())
        printf("Empty");
return 0;
}

