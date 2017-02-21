def f(p,i,c):               #incomplete subset problem
    if i==len(a)-1:
        return 9999999999999999
    if len(p)!=0 and len(p)==n:
        return c+a[i][0]
    f(p,i+1,c)
    print(p)
    f(p|set(a[i][2:]),i+1,c+a[i][0])
    print(p)

t=int(input())
for e in range(t):
    n,m=map(int,input().split())
    x,a,ans=[],[],0
    x=list(map(int,input().split()))
    for i in x:
        ans+=i
    for i in range(m):
        y=list(map(int,input().split()))
        a.append(y)
    s=set()
    ans=min(ans,f(s,0,9999999999999999))
    print(ans)