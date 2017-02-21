#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{ int t;
 scanf("%d",&t);
while(t--)
{ int u,v,i,n,k,j;
  float x,y;
  char a[5]="NO";
  scanf("%d",&n);

  if(n%2!=0) {k=(n+1)/2; j=(n/2);}
  else {k=(n/2); j=(n/2)-1;}

  while(j!=0 && k<(n))
  { x=sqrt((n*n)-(k*k)); u=(int)x;
    y=sqrt((n*n)-(j*j)); v=(int)y;
   // printf("%d %d %f %d %f %d\n",k,j,x,u,y,v);

    if(x/u==1.0 or y/v==1.0)
    { strcpy(a,"YES");
      goto p;
    }
   k++; j--;
  }
  if(j!=0)goto l;

  while(k<n)
  { x=sqrt((n*n)-(k*k)); u=(int)x;
    if(x/u==1.0)
    { strcpy(a,"YES"); goto p;
    }k++;
  }

  l:while(j!=0)
  { y=sqrt((n*n)-(j*j)); v=(int)y;
    if(y/v==1.0)
    { strcpy(a,"YES"); goto p;
    }j--;
  }
  p:printf("%s\n",a);
}
return 0;
}
