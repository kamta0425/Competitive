t=int(input())
for z in range(t):
    n=int(input())
    s=input()
    d,v=[],[]
    d=list(map(int,input().split()))
    for i in range(len(s)):
        if s[i]=="1":
            v.append(i)
    if n==1:
        print(0)
        continue
    a,ans=len(v),0
    for i in range(v[0]-1,-1,-1):ans+=d[i+1]-d[i]
    for i in range(v[a-1]+1,n):ans+=d[i]-d[i-1]
    if a==1:
        print(ans)
        continue
    for i in range(a-1):
        sum,m,l,r=0,0,v[i],v[i+1]
        for j in range(l,r):
            sum+=d[j+1]-d[j]
            m=max(m,d[j+1]-d[j])
        ans+=(sum-m)
    print(ans)