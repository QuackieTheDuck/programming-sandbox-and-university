L=list(range(1,31))
#print(L)
for i in range (0,len(L)-4):
    if (L[i]+L[i+2]+L[i+4])%5==0:
        print(f"Trojka rozdzielona o jedna pozycje sa: {L[i]},{L[i+2]},{L[i+4]}")
for i in range(0,len(L)-6):
    if (L[i]+L[i+3]+L[i+6])%5==0:
        print(f"Trojka rozdzielona o dwie pozycje sa: {L[i]},{L[i+3]},{L[i+6]}")
#dodac sume