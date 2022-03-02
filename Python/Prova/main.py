import os

n: int = 1

abitanti:int = []
citta:str = []
superfici:float = []
citta_max = []

def carica():
    x = 0
    for x in range(n):
        citta.append(str(input("Inserire il nome della citta' ")))
        abitanti.append(int(input("Inserire il numero degli abitanti della citta' ")))
        superfici.append(str(input("Inserire la superficie della citta' ")))
        x+=1

def media_abitanti():
    media_abitanti = 0
    x = 0
    for x in range(n):
        print(abitanti[x])
        media_abitanti = float(media_abitanti + abitanti[x])
        x=+1
    media_abitanti = media_abitanti/n
    print(f"La media degli abitanti e': {media_abitanti}")
    return media_abitanti

def superiore_alla_media():
    contatore_superiore_media:int = 0
    x = 0
    for x in range(n):
        if abitanti[x] > media_abitanti():
            contatore_superiore_media+=1
    x=+1
    print(f"Il numero di citta' con numero di abitanti superiore alla media e': {contatore_superiore_media} ")

def superiore_a_40000():
    superiore_a_40000:int = 0
    x = 0
    if abitanti[x] > 40000:
        superiore_a_40000+=1
        x+=1
    print(f"Il numero di citta' con piu' di 40000 abitanti e': {superiore_a_40000}")

def superficie_totale():
    x = 0
    for x in range(n):
        superficie_totale+=superfici[x]
        x+=1
    print(f"La superficie totale e': {superficie_totale}")

def superifcie_massima():
    x = 0
    superifcie_massima: float = 0
    for x in range(n):
        if superfici[x] > superifcie_massima:
            superifcie_massima = superfici[x]
        x+=1
    print(f"La superficie massima e': {superifcie_massima}")

def minimo_abitanti():
    x = 0
    minimo_abitanti: int = 1000000000000000000000
    for x in range(n):
        if minimo_abitanti > abitanti[x]:
            minimo_abitanti = abitanti[x]
        x+=1
    print(f"Il minimo degli abitanti e': {minimo_abitanti}")

def abitanti_e_superificie():
    x = 0
    contatore_abitanti_e_superficie: int = 0
    for x in range(n):
        if abitanti[x] > 20000 and superfici[x] >> 2000:
            contatore_abitanti_e_superficie+=1
        x+=1
    print(f"Il numero di citta' con superficie superiore a 2000 e abitanti superiori a 20000 e': {contatore_abitanti_e_superficie}")

def media_superfici_30000_ab():
    x = 0
    for x in range(n):
        if abitanti[x] < 30000:
            media_superfici+=superfici[x]
        x+=1
    media_superfici/=n
    print(f"La media delle superifici delle citta' con superficie maggiore di 30000 e': {media_superfici}")

def massimo_abitanti():
    x = 0
    for x in range(n):
        max_abitanti = abitanti
        x+=1
    x = 0
    for x in range(n):
        if abitanti[x] == max_abitanti:
            citta_max.append(abitanti[x])
    print(f"Le citta' con il valore massimo di abitanti sono: {citta_max}")

choose:str = '1'

print("Inserire 1 per eseguire la media degli abitanti;\nInserire 2 per sapere quante citta' hanno un numero di abitanti superiore alla media;")
print("Inserire 3 per sapere quante citta' hanno piu' di 40000 abitanti1;\nInserire 4 per sapere la superficie totale occupata da tutte le citta'")
print("Inserire 5 per sapere la superificie massima occupata da una citta'\nInserire 6 per sapere il numero minimo di abitanti in una citta")
print("Inserire 7 per sapere quante citta' hanno piu' di 20000 abitanti e occupano piu' di 2000mq\nInserire 8 la media delle superfici con meno di 30000 abitanti")
print("Inserire 9 per sapere il nome delle citta' che hanno il numero massimo di abitanti\nInserire 0 per uscire dal programma\n")

while choose != 0:
    choose = input("\nLa tua scelta: ")
    if choose != 0:
        carica()

    match choose:
        case '0':
            print("Uscendo dal programma...")

        case '1':
            print('bad')
            media_abitanti()

        case '2':
            superiore_alla_media()

        case '3':
            superiore_a_40000()

        case '4':
            superficie_totale()

        case '5':
            superifcie_massima()

        case '6':
            minimo_abitanti()

        case '7':
            abitanti_e_superificie()

        case '8':
            media_superfici_30000_ab()

        case '9':
            massimo_abitanti()