rank1=[]
rank2=[]
c=1
while c == 1:
    d=float(input("x")）
    if d ==0:
        break
    else:
        rank1.append(d)
        rank2.append(float(input("y")））
num=len(rank1)
s=0
m=0
n=0
x1=sum(rank1)/num
y1=sum(rank2)/num
for i in range(0,num):
    s=s+(rank1[i]-x1)*(rank2[i]-y1)
    m=m+(rank1[i]-x1)**2
    n=n+(rank2[i]-y1)**2
print(s/(m*n)**0.5)
