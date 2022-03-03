import os
import random as ran

n: int = 5

listanum: int = []
temp: int = 0

def carica():
    for x in range(n):
        listanum.append(ran.randint(1, 10))
        x+=1
    print(f"L'array disordinato e': {listanum}")

def Insertion_sort():
    for i in range(i+1, n):
        temp = listanum[i]
        j = i - 1
        while listanum[j] > temp and j >= 0:
            listanum[j+1] = listanum[j];
            j-=1
        listanum[j+1] = temp
        i+=1
    print(f"L'array ordinato e': {listanum}")

def Selection_sort():
    for i in range(n):
        index_min = i
        for j in range(i+1, n):
            if listanum[j] < listanum[index_min]:
                index_min = j

            j+=1  
        listanum[i], listanum[index_min] = listanum[index_min], listanum[i]     
        i+=1
    print(f"L'array ordinato e' {listanum}")

print("Inserire 0 per terminare il programma;\n1 per usare l'insertion sort;\n2 per usare il selection sort")

fun = int(input(""))
match fun:
    case 0:
        print('Programma terminato.')

    case 1:
        print("Usando l'insertion sort..")
        carica()
        Insertion_sort()

    case 2:
        print("Usando il selection sort..")
        carica()
        Selection_sort()