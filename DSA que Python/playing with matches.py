# # def matches(a,b):
# #     sum = a+b
# #     for i in range(len(str(sum))):
# #         if i==1 :
# #             print(2)
# #         elif i==7:
# #             print(3)
# #         elif i==4:
# #             print(4)
# #         elif i==2 or i==3 or i==5:
# #             print(5)
# #         elif i==6 or i==9:
# #             print(6)
# #         elif i==8:
# #             print(7)
# #         sum-=1
# #
# # t = int(input())
# # while t > 0:
# #     ab = list(map(int, input().split(" ")))
# #     a = ab[0]
# #     b = ab[1]
# #     print(matches(a, b))
# #     t-=1
# #
# #

# # cook your code here
# T = int(input())

# for i in range(T):
#     A, B, X = map(int,input().split())
#     diff = B-A
#     div = X//diff
#     print(div)
#     # print(A,B,X)

string = "geeksforgeeks"
c = 0
p = []
# for i in string:
#     if i not in string:
#         p=p+i
#         c+=1
print(p)

for i in range(len(string)):
    for j in range(len(string)):
        if string[i]==string[j]:
            p.append(string[i])
string = list(string)
a = []
for i in string:
    if p[i] != string[i]:
        a.append(i)
print(i)




