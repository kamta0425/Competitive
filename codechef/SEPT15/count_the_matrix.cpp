#include<stdio.h>
class cord
{public:
int r,c;
};

int main()
{ int i,j,n,t,R,C;
scanf("%d",&t);
 while(t--)
 { scanf("%d",&n);
   int s=0,a[500][500];
  cord *x=new cord[(n*n)+1];
  for(i=0;i<n;i++)
   for(j=0;j<n;j++)
   {scanf("%d",&a[i][j]);
     x[a[i][j]].r=i;
     x[a[i][j]].c=j;
   }
   R=x[1].r;C=x[1].c;
   for(i=2;i<=n*n;i++)
   {
     while( (R!=x[i].r) or (C!=x[i].c) )
     { if(R>(x[i].r))
         {R-=1; s++;}
       else if(R<(x[i].r))
         {R+=1; s++;}
       if(C>(x[i].c))
         {C-=1; s++;}
       else if(C<(x[i].c))
         {C+=1; s++;}
     }
   }
  printf("%d\n",s);
 }
return 0;
}
