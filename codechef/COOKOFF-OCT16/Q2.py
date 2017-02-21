t=1
for e in range(t):
    a,fnd,othr,x=[],[],[],[]
    n,m=map(int,input().split())
    a=list(map(int,input().split()))
    for i in range(m):
        x=list(map(str,input().split()))
        if int(x[0]) in a:
            fnd.append([int(x[1]),x[2]])
        else:
            othr.append([int(x[1]),x[2]])
    fnd.sort(reverse=True)
    othr.sort(reverse=True)
    for i in fnd:
        print(i[1])
    for i in othr:
        print(i[1])