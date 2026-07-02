# Wariant zadania 27 z wykorzystaniem set()
v1={1,3,5,7,9}
v2={1,4,7,11,15}
v3={1,2,3,4,5,6,7,8,9,20}
print('Czesc wspolna v1 i v2 ', v1.intersection(v2))
print('Roznica v3-(v1+v2) ', v3.difference(v1.union(v2)))
print('Suma wszystkich v1+v2+v3 ', v1.union(v2).union(v3))

# genialne!!