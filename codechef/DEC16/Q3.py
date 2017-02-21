t=int(input())   #Q3
for e in range(t):
    n=int(input())
    ans=1
    if n==1:
        print("INFINITY")
    for x in range(3,n+1):
        z=n
        while True:
            a=z%x
            z=z//x
            if z==0:
                if a==1:
                    ans+=1
                break
    print(ans)