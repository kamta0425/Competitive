#include<stdio.h>
#include<math.h>

float a=1000000000.00;

int main()
{ float p,k,f,s;
  int m,t,n;
  scanf("%d",&t);
  while(t--)
 { scanf("%d %f",&m,&p);
   n=m-1;

   if(m==1)
    {f=a;
     s=0.00;
    }
   else
    { if(p>(.5))
      { if((n%2)==0)
        { f=a*pow(p,n);
         s=(a-f);
         if(s>f)
         { k=f;
           f=s;
           s=k;
         }
        }
       else
        {
        s=a*pow(p,n);
        f=(a-s);
        if(s<f)
        { k=f;
          f=s;
          s=k;
        }

        }
      }
      else
      { f=s=a*pow(p,n);
      }
    }
  printf("%.2f %.2f\n",f,s);
 }
return 0;
}
