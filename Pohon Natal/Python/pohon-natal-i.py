x = int(input('Masukan Tinggi Pohon : '))
for i in range(1, x + 1):
    print(' ' * (x - i) + '*' * i + '*' * (i - 1))
    if(i==x):
        for j in range(1, 3):
            print(' ' * (x-2) + '===')
