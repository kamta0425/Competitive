#include<stdio.h>
#include<algorithm>

class kps
{ public:
  int s,g;
};

int main()
{ int i,j,n,g,t,x,c;
scanf("%d",&t);
while(t--)
  { c=0;
     scanf("%d",&n);
     int *a;
     kps *p;
     a=new int[n];
     p=new kps[n];
     for(i=0;i<n;i++) scanf("%d",&a[i]);
     std::sort(a,a+n);
     for(i=0;i<n;i=j)
       { p[c].g=a[i];
         p[c].s=1;
           for(j=i+1;j<n;j++)
          { if(a[i]==a[j])(p[c].s)++;
            else break;
          }
       c++;
       }
       g=p[0].s; x=0;
       for(i=1;i<c;i++)
        {    if(g<p[i].s)
            {
                g=p[i].s;
                x=i;
            }
        }
       printf("%d %d\n",p[x].g,g);
 }
return 0;
}
