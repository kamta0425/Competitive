#include<stdio.h>
#include<math.h>
///#define x sqrt(2)
///#define xy sqrt(6)
#define fa(a,b) sqrt(2)*(a+b)-sqrt(6)*(a-b)
#define fb(a,b) sqrt(2)*(a-b)+sqrt(6)*(a+b)
#define af(a,b) (a*(1-sqrt(3))+b*(sqrt(3)+1))/(8*sqrt(2))
#define bf(a,b) (a*(1+sqrt(3))+b*(sqrt(3)-1))/(8*sqrt(2))

inline long f(long i,long k)
 { if(i>k)return i;
   else return k;
 }
int main()
{ long i,m,n,k,j,s;
long double q;
scanf("%ld %ld %ld",&i,&k,&s);
scanf("%ld %ld",&m,&n);

  long double *a=new long double[f(i,k)+1];
  long double *b=new long double[f(i,k)+1];
  a[i]=m;b[i]=n;
 if(i==k)
  {
    q=((long double)(m+n))/pow(2,s);
    goto t;
  }
 else if(i<k)
 {
    for(j=i;j<k;j++)
    {
      a[j+1]=fa(a[j],b[j]);
      b[j+1]=fb(a[j],b[j]);
    }
 }
 else ///if(k<i)
  {
     for(j=i;j>k;j--)
     {
        a[j-1]=af(a[j],b[j]);
        b[j-1]=bf(a[j],b[j]);
     }
  }

q=(a[k]+b[k])/pow(2,s);
t:
printf("%Lf",q);
return 0;
}
