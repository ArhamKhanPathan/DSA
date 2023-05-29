n = input()
s = len(n)
v = 0
c = 0
n.lower()
for i in range(s):
    if(n[i] == " "): continue
    if (n[i] == "a" or n[i] == "e" or n[i] == "i" or n[i] == "o" or n[i] == "u"): c+=1
    else: v+=1

print(c,v)

