#include<string.h>
#include<iostream>
#include<fstream>
#include<istream>
#include<ostream>
#include<stdlib.h>
using namespace std;

class account
{ public:
    char name[10];
    int pin,amt;
  public:
      void input()
    { cout<<"Enter name:- ";
      cin>>name;
      cout<<"Enter pin :- ";
      cin>>pin;
      cout<<"Enter amount:- ";
      cin>>amt;
    }
    void output()
    { cout<<"Account holder name is :- "<<name<<endl;
      cout<<"PIN is:- "<<pin<<endl;
      cout<<"Amount is:- "<<amt<<endl;
    }
};

int main ()
{ account x;
  fstream f;
  f.open("e:/cpp.txt",ios::in | ios::out | ios::app);
  if(!f)
  { cout<<"File not open successfully";
    exit(0);
  }
  cout<<"File open successfully"<<endl<<endl;

  int c;
  do
  { cout<<"Enter the acount detail"<<endl;
    x.input();
    f.write((char*)&x,sizeof(x));
    cout<<"Enter 1 to continue";
    cin>>c;
  }while(c==1);

  f.seekg(0);

  while(1)
   { f.read((char*)&x,sizeof(x));
     if(!f) break;
     x.output();
   }

   /*char a[10];                     // HOW TO DELETE AN EXIXTIG OBJECT
   int t;
   cout<<"Enter the name of account holder :-";
   cin>>a;

  while(1)
  {
    f.read((char*)&x,sizeof(x));
     if(strcmp(a,x.name)==0)
      {x.output();
       cout<<"Enter new amount for this account :-";
       cin>>t;
       x.amt=t;
       f.seekg(-sizeof(x),ios::cur);
       f.write((char*)&x,sizeof(x));
       f.seekg(-sizeof(x),ios::cur);
       f.read((char*)&x,sizeof(x));
       x.output();
       break;
      }
  } */

  cout<<"\n\n\n\n";
  f.close();
  return 0;
}
