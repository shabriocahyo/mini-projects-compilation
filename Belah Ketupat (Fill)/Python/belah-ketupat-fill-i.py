x = int(input('Masukan Nilai : '))

for i in range(x):
    print(' ' * (x - i) + '*' * i + '*' * (i - 1))
    
for j in range(i-1):
    print(' ' * (j + 2) + '*' * (i - (j + 1)) + '*' * (i - (j + 2)))
