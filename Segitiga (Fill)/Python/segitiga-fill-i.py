x = int(input('Masukan Tinggi Segitiga : '))
for i in range(x):
    print(' ' * (x - i) + '*' * i + '*' * (i - 1))
