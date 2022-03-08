x = int(input('Masukkan panjang deret: '))

fib = [0, 1]

for i in range(2, x):
  f1 = fib[i - 2]
  f2 = fib[i - 1]
  deretN = f1 + f2

  fib.append(deretN)
  
print(fib)
