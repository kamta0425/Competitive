#include<cstdio>

int A,N,K,m[102];

inline void check(int A,int j)
{ if(j>=K or A==0) return;
  if(A<N)
   { m[j]=A;
     return;
   }
   m[j]=A%N;
   A=A/N;
   check(A,j+1);
}

int main()
{
  int i,j;
   scanf("%d%d%d",&A,&N,&K);
   for(i=0;i<K;i++)m[i]=0;
   N++;
   m[0]=A%N;
   A=A/N;
   check(A,1);
   for(i=0;i<K;i++)
     printf("%d ",m[i]);
   printf("\n");

return 0;
}
