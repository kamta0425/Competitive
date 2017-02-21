#include<cstdio>
#include<algorithm>
using namespace std;

class cord            /// 1 corner case is missing
{ public:
   float m,c;
};

inline bool msort(cord x,cord y)
{ return (x.m < y.m); }

inline bool csort(cord x,cord y)
 { return (x.c < y.c);}

cord y[100000];
float x[100000];

int main()
{ int t;
 scanf("%d",&t);
 while(t--)
 { int A,B,C,n,s1=1,s2=1,g=1;
   int i=0,j=0,k=0,left=0,right=0,h=0;

   scanf("%d",&n);
   j=k=0;
   for(i=0;i<n;i++)
   {
      scanf("%d %d %d",&A,&B,&C);
      if(B==0)
         x[j++] = float(C)/A;
      else
       { y[k].m = float(A)/B;    ///y[i]= <float>  possible with operator overloading
         y[k].c = float(C)/B;
         k++;
       }
   }
    sort(x,x+j);
    for(i=1;i<j;i++)
      if( x[i] != x[i-1]) s2++;
    sort(y,y+k,msort);
    for(i=1;i<k;i++){
      if( y[i-1].m == y[i].m ) s1++;
      else{
          if(s1>1){c:
            s1=1;
            sort(&y[h],&y[i],csort);
            for(int r=h+1;r<=i-1;r++)
              if( y[r-1].c!=y[r].c ) s1++;
            if(s1>g)g=s1;
            s1=1;
          }
         h=i;
      }
    }
   if( y[i-2].m == y[i-1].m and s1>1 )goto c;
  printf("%d\n",max(g,s2));
 }
return 0;
}
