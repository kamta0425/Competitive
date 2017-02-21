t=int(input())
for i in range(t):
    a,b,c=map(int,input().split())
    ans,u,v,x=0,0,0,int(c**0.5)
    for j in range(1,x+2):
        if c%j==0:
            v=c//j
            u=j
        if u<=a and v<=b:
            ans+=1
    print(ans)