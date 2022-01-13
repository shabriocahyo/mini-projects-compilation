x = int(input('Masukan Tinggi Segitiga : '))
print((' ' * (x - 1) + ('*')))
for i in range(2, x-1):
    print((' ' * (x - i)) + ('*') + (' ' * (i - 1)) + (' ' * (i - 2)) + ('*'))
    
for j in range(1, 2):
    print((' ' * (x - i - 1)) + ('* ') + ('* ' * (j + i - 1)))
