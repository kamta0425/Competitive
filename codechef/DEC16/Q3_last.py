t=int(input())      #Q3
for e in range(t):
    n=int(input())
    if n==0:
        print("0")
        continue
    if n==1:
        print("INFINITY")
        continue
    if n==2:
        print("1")
        continue
    ans=1+(n//2)
    if n%2==1:ans+=1
    for x in range(3,1+(n//2)):
        z=n
        a=z%x
        if a==1 and z==0:
            ans+=1
            continue
        while z!=0:
            a=z%x
            z=z//x
        if a==1:
            ans+=1
    print(ans)