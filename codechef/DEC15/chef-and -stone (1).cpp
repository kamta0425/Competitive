#include<cstdio>
#include<iostream>
using namespace std;
int main()        ///must use lld or llu for unsinged
{ int t;
 scanf("%d",&t);
 while(t--)
 { unsigned long long int x,y,m,s=0;
   scanf("%llu %llu %llu",&x,&y,&m);
   s=m*(m+1)/2;

   if( s< min(x,y) )
   { printf("%llu\n",x+y-2*s);
     continue;
   }
   printf("%llu\n",max(x,y)-min(x,y) );
 }
return 0;
}
