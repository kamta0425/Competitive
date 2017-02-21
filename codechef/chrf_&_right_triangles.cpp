#include<stdio.h>

class cord
{ public:
  int x1,y1,x2,y2,x3,y3;
};

inline int fun(cord p)   ///programme is terminating
{ float m1,m2,m3;
  m1=(p.y1-p.y2)/(p.x1-p.x2);
  m2=(p.y1-p.y3)/(p.x1-p.x3);
  m3=(p.y3-p.y2)/(p.x3-p.x2);
   if( (m1*m2==-1) || (m1*m3==-1) ||(m3*m2==-1) )
    return 1;
   else 0;
}

int main()
{ int n,i,s=0;
   scanf("%d",&n);
   cord p[100002];
   //cord *p=new cord[n];
   for(i=0;i<n;i++)
   { scanf("%d %d",&p[i].x1,&p[i].y1);
     scanf("%d %d",&p[i].x2,&p[i].y2);
     scanf("%d %d",&p[i].x3,&p[i].y3);
     if(fun(p[i]))
     s++;
   }

printf("%d",s);
return 0;
}
