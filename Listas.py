import random
import time

lista = []
mayor:int = 0
menor:int = 0
idx:int = 0
idx1:int = 0
max = int(1 + (random.random()  * 100))

#max = 10
print("Numeros a generar ->",max)

for i in range(max):
    lista.append(int(1 + (random.random()  * 1000)))

mayor=lista[0]
menor=lista[0]
#Busca Mayor
for c,i in enumerate(lista):
    if i > mayor:
        mayor = i
        idx = c
    if i < menor:
        menor = i
        idx1 = c
print("Mayor ->",mayor, " en posicion ->",idx+1)
print("Menor ->",menor, " en posicion ->",idx1+1)
print("----"*4)

print(lista)
for i in range(max-1):
    for j in range((max-1)-i):
        if lista[j] > lista[j+1]:
            lista[j],lista[j+1] = lista[j+1],lista[j]
            if max < 20:
                print(lista, end='\r')
            time.sleep(1)

print(lista)
