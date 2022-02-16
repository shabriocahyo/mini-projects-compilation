x = int(input('Masukan Tinggi Segitiga : '))

for i in range(x):
    print(' ' * (x - i) + '*' * i + '*' * (i - 1))
    
for j in range(i-1):
    print(' ' * (j + 2) + '*' * (i - (j + 1)) + '*' * (i - (j + 2)))
