def gcd(x, y):
    while y != 0:
        (x, y) = (y, x % y)
    return x

t=int(input())
for e in range(t):
    n=int(input())
    a,b,ans,p,j=[],[],0,1,0
    a=list(map(int,input().split()))
    for i in range(1,len(a)):
        if a[i]==1:
            continue
        if gcd(a[j],a[i])>1:
            p+=1
            #print("i=",i)
            if i==len(a)-1:
                ans=max(p,ans)
        else:
            ans=max(p,ans)
            p=1
        j+=1
    print(ans)