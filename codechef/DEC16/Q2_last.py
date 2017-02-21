def gcd(x, y):
    while y != 0:
        (x, y) = (y, x % y)
    return x

t=int(input())
for e in range(t):
    n=int(input())
    a,b,c=[],[-1]*(10**5+2),[]
    k,p,j,ans=1,1,0,0
    a=list(map(int,input().split()))
    a=list(filter(lambda x: x != 1, a))
    if gcd(a[0],a[1])<=1:
        c.append(0)
    else:
        b[0]=k
        k+=1
    for i in range(1,len(a)):
        if gcd(a[j],a[i])>1:
            print(i)
            b[i]=k
            k,p=k+1,p+1
            j=i
        else:
            if i!=1:           # problem here
                c.append(i)      #p+1-b[i]
            if i==1:j+=1
        #print(j)
    print(ans,len(a),a,c)