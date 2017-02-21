#include<stdio.h>
#include<cmath>
#include<algorithm>
#define N pow(2,30)
using namespace std;
int a[100005],b[100005];
int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  { int n,j,i,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    { scanf("%d",&a[i]);
      b[i]=1;
    }
    sort(a,a+n);
    j=0;
    for(i=1;i<n;i++)
    {  if(a[i-1]==a[i])
       { b[j]++;
       }
       else j++;
    }
     if(a[i-2]==a[i-1]) j++;
     sort(b,b+j,greater<int>());
     for(i=1;i<j;i++)
     { s+=b[i];
     }
     int g=b[0];
     if(s>=(g-1))
        printf("can do\n");
     else
        printf("bad luck\n");
  }
return 0;
}
