t=int(input())
for e in range(t):
    a=list(map(str,input().split()))
    s=0
    b=[]
    l=['0','1','2','3','4','5','6','7','8','9']
    for i in a:
        for j in i:
            if j in l:
                s+=int(j)
                i=i.replace(j,'')
        b.append(i)
    b.sort()
    for i in b:
        print(i,end=" ")
        s-=len(i)
        print(s,end=" ")
    print()
