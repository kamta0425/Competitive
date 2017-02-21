#include<stdio.h>
#include<iostream>
using namespace std;

class cord1()
{ int s,q;
};

class cord : public cord1
{ public:
  int x,y;
};

void sort(cord1 s)
 { int i,j,g;
   for(i=0;i<4;
   i++)
    {  g=s[i].s;
        for(j=0;j<4;j++)
        {

        }
    }
 }
int main()
{ int t,n,p,i,j,l=0,k=0,x1,x2,y1,y2;
  int s1,s2,s3,s4;
  cord1 s[4];
  scanf("%d",&t);
  while(t--)
 { scanf("%d",&n);
   cord *a =new cord[n];
   for(i=0;i<n;i++)scanf("%d %d",&a[i].x,&a[i].y);

                                              /// x1=p[0].x,x2=p[0].x,y1=p[0].y,y2=p[0].y;
   for(i=0;i<n;i++)
    { s[1].s=0,s[2].s=0,s[3].s=0,s[0].s=0;                                   /*if(x1<a[i].x) x1=a[i].x;
                                                  if(x2>a[i].x) x2=a[i].x;
                                                   if(y1<a[i].y) y1=a[i].y;
                                                   if(y2>a[i].y) y2=a[i].y; */
      for(j=0;j<n;j++)
       { if(a[j].x>=a[i].x && a[j].y>=a[i].y){(s[0].s)++;q=1;}
         if(a[j].x<=a[i].x && a[j].y>=a[i].y){(s[1].s)++;q=2;}
         if(a[j].x<=a[i].x && a[j].y<=a[i].y){(s[2].s)++;q=3;}
         if(a[j].x>=a[i].x && a[j].y<=a[i].y){(s[3].s)++;q=4;}
       }
      sort(s);
(s1>s2)?((s1>s3)?((s1>s4)?a[i].q=1,a[i].s=s1:a[i].q=4,a[i].s=s4) :((s3>s4)?a[i].q=3,a[i].s=s3:a[i].q=4,a[i].s=s4))   :   ((s2>s3)?((s2>s4)?a[i].q=2,a[i].s=s2:a[i].q=4,a[i].s=s4) :((s3>s4)?a[i].q=3,a[i].s=s3:a[i].q=4,a[i].s=s4));
    }
    for(i=0;i<n;i++)
    printf("%d %d\n",a[i].s,a[i].q);
 }
return 0;
}

