#include<iostream>
using namespace std;

class product
{ private:
    int pno;
    int pqty;
    float pcost;
 public :
     void input()
     {cin>>pno>>pqty>>pcost;}
     float count()
     {float c= pqty*pcost;
     return c;
     }
     void total(float a=0,float b=0,float c=0)
     {float t= a+b+c;
     cout<<"Total of sum of all objects is "<<t;
     }
};

int main()
{product x,y,z;
 float a,b,c;
 x.input();
 y.input();
 z.input();

 x.total(x.count(),y.count(),z.count());
return 0;
}
