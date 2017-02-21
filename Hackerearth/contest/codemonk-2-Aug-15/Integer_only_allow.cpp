#include<iostream>
using namespace std;

 class cord
 {public:
  int x,y;
 };
static float x=0,y=0;
int fun(cord a,cord b,int u,int v)
{ float f,f1,m,c;
  m=(a.y-b.y)/(a.x-b.x);
  c= (a.y)-m*(a.x);
  f1= y-(m*x)-c;
  f= v-(m*u)-c;
  if((f>0 && f1>0)||(f1<0 && f<0))return 1;
  else return 0;
}

/*void sort(cord a[],int n)
{int i,j; cord t;
 for(j=1;j<n;j++)
 for(i=0;i<n-j;i++)
 if(a[i].x>a[i+1].x)
 { t.x=a[i].x; t.y=a[i].y;
   a[i].x=a[i+1].x; a[i].y=a[i+1].y;
   a[i+1].x=t.x; a[i+1].y=t.y;
 }
}
*/
 int main()
 {int n,i,j,k,s=0;
  cord a[100];
 cin>>n;
 for(i=0;i<n;i++) cin>>a[i].x>>a[i].y;
 ///sort(a,n);
 int lx=a[0].x,ly=a[0].y,mx=a[0].x,my=a[0].y;
 for(i=1;i<n;i++)
 { if(a[i].x>mx) mx=a[i].x;
   if(a[i].y>my) my=a[i].y;
   if(a[i].x<lx) lx=a[i].x;
   if(a[i].y<ly) ly=a[i].y;
 }
 for(i=0;i<n;i++)
 { x+=a[i].x;
   y+=a[i].y;
 }x/=n;y/=n;

 for(i=0;i<n-1;i++)
 { for(k=ly;k<=my;k++)
   for(j=lx;j<=mx;j++)
   { if(fun(a[i],a[i+1],j,k))
     s++;
   }
 }
   for(k=ly;k<=my;k++)
   for(j=lx;j<=mx;j++)
   { if(fun(a[n-1],a[0],j,k))
     s++;
   }
 cout<<s;
 return 0;
 }


