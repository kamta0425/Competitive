t=int(input())
for e in range(t):
    n=int(input())
    b,c,ans=n%8,n//8,''
    if b==0:
        ans=str((c-1)*8+7)+'SL'
    elif b==1:
        ans=str(c*8+4)+'LB'
    elif b==2:
        ans=str(c*8+5)+'MB'
    elif b==3:
        ans=str(c*8+6)+'UB'
    elif b==4:
        ans=str(c*8+1)+'LB'
    elif b==5:
        ans=str(c*8+2)+'MB'
    elif b==6:
        ans=str(c*8+3)+'UB'
    elif b==7:
        ans=str(c*8+8)+'SU'
    print(ans)