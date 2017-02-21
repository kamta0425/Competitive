t=int(input())    #programme not working answer correctvely 
for e in range(t):
   num=int(input())
   s,sm=0,0
   for x in range(2,num-1):
     r=num%x
     if r==0:
       sm=sm+(num/x)
     elif num%r==0 and x%r==0:
       sm=sm+(num/r)
     else:
       r=int(x/2);s=1;k=1;
       for j in range(2,r+1): 
         if(num%r==0 and x%r==0): s=r
         if(num%j==0 and x%j==0): k=j
         r=r-1;
       sm+=(num/max(s,k))
   sm=2*num+1
   if num==1: sm=1
   if num==2: sm=3
   print(int(sm))
