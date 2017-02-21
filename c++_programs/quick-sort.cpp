#include<iostream>
#include<cstdio>
using namespace std;

void quick(int a[10],int left,int right,int &loc)
{ int i;
    while(1)
    {
         while(a[loc]<=a[right] and loc!=right )right--;
           if(loc==right) return;
           if(a[loc]>a[right])
           { i=a[loc];
             a[loc]=a[right];
             a[right]=i;
            loc=right;
           }
         while(a[loc]>=a[left] and loc!=left )left++;
         if(loc==left) return;
         if(a[loc]<a[left])
         { i=a[loc];
           a[loc]=a[left];
           a[left]=i;
           loc=left;
         }
    }
}

void quicksort(int a[],int n)
{ int loc=0;
  int top=1,Beg,End;
  int left[15],right[15];
  left[top] =0;
    right[top] =n-1;
    while(top!= NULL)
    { Beg = left[top];
      End = right[top];
      top--;
      loc=Beg;
      quick(a,Beg,End,loc);
      if(Beg<loc-1)
      { top++;
        right[top] =loc-1;
        left[top] =Beg;
      }
      if(End>loc+1)
      { top++;
        left[top] =loc+1;
        right[top] =End;
      }
    }
}
int main()                                  /// LL+BB 9400054141 BSNL  broad band status
  { int i,n,a[10];
    cin>>n;
    for(i=0;i<n;i++)cin>>a[i];
    quicksort(a,n);
    for(i=0;i<n;i++)cout<<a[i]<<" ";
  return 0;
  }

