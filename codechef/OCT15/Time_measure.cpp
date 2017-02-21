#include<stdio.h>
static int hh[5],mm[5],c;

inline float diff(float a,float b)
{    if(a>b) return (a-b);
     else return (b-a);
}

inline void comp(float mA,float hA,float A)
{  float d;
   d=diff(mA,hA);
    if(d>180) d=360-d;
    if( diff(d,A)<=(1.0/120.0) )
    { hh[c]= hA/30;
      mm[c]= mA/6;
      c++;
    }
}

int main()
{ int t;
 scanf("%d",&t);
while(t--)
{ c=0;
  int i;
  float a=(1.0/12.0),A,hA=0,mA=0;
  scanf("%f",&A);
  while(hA<360.00)
  {
    comp(mA,hA,A);
    mA=mA+1.0; hA=hA+a;
    if(mA>=360) mA=mA-360;
  }
  for(i=0;i<c;i++)
  printf("%.2d:%.2d\n",hh[i],mm[i]);
}
return 0;
}
/*static int hh[5],mm[5],c;

inline float diff(float a,float b)
{    if(a>b) return (a-b);
     else return (b-a);
}

inline void comp(float mA,float hA,float A)
{  float d;
   d=diff(mA,hA);
    if(d>180) d=360-d;
    if( diff(d,A)<=(1.0/120.0) )
    { hh[c]= hA/30;
      mm[c]= mA/6;
      c++;
    }
}

int main()
{ int t;
 scanf("%d",&t);
while(t--)
{ c=0;
  int i;
  float a=(1.0/12.0),A,hA=0,mA=0;
  scanf("%f",&A);
  if(A>30.0)goto r;

  while(hA<360.00)
  {
    comp(mA,hA,A);
    if(c>=2)break;
    mA=mA+1.0; hA=hA+a;
    if(mA>=360) mA=mA-360;

    if(hA>100.0)
     { mA=0.0; hA=270.0;}

  }goto p;

  r:mA=0.0; hA=60.0;
  while(hA<=270.00)
  {
    comp(mA,hA,A);
    if(c>=2)break;
    mA=mA+1.0; hA=hA+a;
    if(mA>=360) mA=mA-360;
  }
  p:for(i=0;i<c;i++)
    printf("%.2d:%.2d\n",hh[i],mm[i]);
}
return 0;
}*/
