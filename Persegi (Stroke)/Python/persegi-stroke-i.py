x = int(input("Masukan Lebar Persegi : "))
print("* " * x)
for i in range(x-2):
    print("* " + ("  " * (x - 2)) + "*")
print("* " * x)
