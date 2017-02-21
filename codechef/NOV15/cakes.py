p=int(input())
for e in range(p):
    n = list(map(int, input().split()))
    nn,mm=n[0],n[1]
    x=mm+1
    su=1
    while x!=1:
        x=x+mm
        su=su+1
        if x>nn:
            x=x-nn
    if su==nn:
        print("Yes")
    else:
        print("No",su)
