s="I Love a apple"
ch=s.split()
for i in range(len(ch)):
    if ch[i]=="a":
        ch[i]="an"
s=" ".join(ch)
print (s)
        