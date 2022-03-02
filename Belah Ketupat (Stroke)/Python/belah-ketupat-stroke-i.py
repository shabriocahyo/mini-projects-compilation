x = int(input('Masukan Nilai : '))

print((' ' * (x - 1) + ('*')))
for i in range(2, x):
    print((' ' * (x - i)) + ('*' + (' ' * (i - 1)) + (' ' * (i - 2)) + ('*')))
    
for j in range(x - 3):
    print(' ' * (j + 2) + ('*' + (' ' * (i - j - 2))) + (' ' * (x - j - 4)) + ('*'))
print((' ' * (x - 1) + ('*')))
