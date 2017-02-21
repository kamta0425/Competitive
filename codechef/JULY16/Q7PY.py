n=int(input())
a,mod=[],786433
a=list(map(int,input().split()))
q=int(input())
for z in range(q):
    sum=a[0]%mod
    x=int(input())
    t=x%mod
    x=1
    for i in range(1,n+1):
        x=((x%mod)*t)%mod
        sum=( sum + (a[i]%mod)*x)%mod
    print(sum)