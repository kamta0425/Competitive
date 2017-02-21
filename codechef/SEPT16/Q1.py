t=int(input())  
for e in range(t):
    s=input()
    x,y=0,0
    if len(s)==1:
        print("No")
        continue
    for i in range(len(s)):
        if s[i]=='1':x+=1
        else: y+=1
    if x==1 or y==1:
        print("Yes")
    else:
        print("No")