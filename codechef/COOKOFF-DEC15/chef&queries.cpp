#include<cstdio>
using namespace std;
#define N 10000002
#include<vector>
#include<algorithm>

int s[N];
static long long sum;
vector<int> v;

void add(int x)
{
    if( find(v.begin(), v.end(),x)== v.end() )
    { sum+=x;
      v.push_back(x);
    }
}
void del(int x)
{
    if( find(v.begin(), v.end(),x)!= v.end() )
        v.erase( find(v.begin(), v.end(),x) );
}
int main()
{  int Q,A,B;
    scanf("%d%d%d%d",&Q,&s[0],&A,&B);
    for(int i=1;i<Q;i++)
      s[i]= A*s[i-1]+B;
    sum=0;
    for(int i=0;i<Q;i++)
    {  if( s[i]%2 )
          add( s[i]/2 );
       else
          del(s[i]/2);
    }
    printf("%lld\n",sum);
return 0;
}
