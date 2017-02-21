#include<iostream>
#include<iomanip>
using namespace std;

class cord
{public:
 float x,y;
};

void sort(cord a[3])
{int i; cord t;
 for(i=0;i<=1;i++)
 if(a[i].x>a[i+1].x)
 { t.x=a[i].x; t.y=a[i].y;
   a[i].x=a[i+1].x; a[i].y=a[i+1].y;
   a[i+1].x=t.x; a[i+1].y=t.y;
 }
}
int main()
{ int i,n;
  cord a[3],b[3];
  for(i=0;i<3;i++)
  cin>>a[i].x>>a[i].y;
  sort(a);
    b[0].x=(a[0].x+a[1].x-a[2].x);
    b[0].y=(a[0].y+a[1].y-a[2].y);
    b[1].x=(a[0].x+a[2].x-a[1].x);
    b[1].y=(a[0].y+a[2].y-a[1].y);
    b[2].x=(a[2].x+a[1].x-a[0].x);
    b[2].y=(a[2].y+a[1].y-a[0].y);
  sort(b);
  for(i=0;i<3;i++)
  cout<<fixed<<setprecision(4)<<b[i].x<<" "<<b[i].y<<endl;

 return 0;
}
