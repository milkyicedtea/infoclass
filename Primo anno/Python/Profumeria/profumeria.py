import os
import random

n: int = 10

nome: str = []
codice: int = []
clprodotto: int = []
prezzo: float =  []

def carica():
    x: int = 0
    for x in range(n):
        nome.append(str(input('Inserire il nome del prodotto: ')))
        codice.append(int(input('Inserire il codice univoco del prodotto: ')))
        clprodotto.append(int(input('Inserire la capienza del prodotto in cl: ')))
        prezzo.append(float(input('Inserire il prezzo del prodotto: ')))
        x+=1

def bottiglie_150():
    x: int = 0
    contatore_150: int = 0
    for x in range(n):
        if clprodotto[x] == 150:
            contatore_150+=1
    print(f'Ci sono {contatore_150} bottiglie da 150 cl')

def somma_prezzo():
    x: int = 0
    somma: int = 0
    for x in range(n):
        somma = somma + prezzo[x]
        x+=1
    print(f"La somma dei prezzi e': {somma}")
    return somma

def media_profumi():
    somma = somma_prezzo()
    media = somma/n
    print(f"La media dei prezzi dei profumi e': {media}")

def max_prezzo():
    x: int = 0
    cod: str = codice[x]
    max_prezzo: float = prezzo[x]
    for x in range(n):
        if prezzo[x] > max_prezzo:
            max_prezzo = prezzo[x]
            cod = codice[x]
    print(f"Il prodotto con il codice {cod} ha il prezzo piu' alto: {max_prezzo}")

