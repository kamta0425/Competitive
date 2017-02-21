t=int(input())          #Q3 
for e in range(t):
    n=int(input())  
    a,x,y,z,temp=[],-1,-1,-1,0
    if n==1:
        print("chef")
        continue
    for i in range(1,n+1):
        a=list(map(int,input().split()))
        s=set(a[1:])
        l=len(s)
        if l==4:temp=a[0]+1
        elif l==5:temp=a[0]+2
        elif l==6:temp=a[0]+4
        else: temp=a[0]
        if temp>=x:
            y=x
            x=temp
            z=i
    if x==y:z=-1
    if z==1:
        print("chef")
    elif z==-1:
        print("tie")
    else:
        print(z)
       