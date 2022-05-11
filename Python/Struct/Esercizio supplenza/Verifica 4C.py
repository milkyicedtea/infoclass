import os
import array as arr

class ProductProperties:
    def __init__(self, nome: str = "", prezzo: float = 0, quantita: int = 0, reparto: str = "", codice: int = 0):
        self.nome = nome
        self.prezzo = prezzo
        self.quantita = quantita
        self.reparto = reparto
        self.codice = codice

prodotti: list = [ProductProperties()] *15

def carica_prodotto(x = None):
    if x == None:
        for x in range(15):
            prodotti.append(ProductProperties(nome = input('Inserire il nome del prodotto '), prezzo = input('Inserire il prezzo del prodotto '), quantita = input("Inserire la quantita' del prodotto "), reparto = input('Inserire il nome del reparto '), codice = input('Inserire il codice del prodotto ')))
            x+=1

    elif x != None:
        prodotti[x].nome = input('Inserire il nome del prodotto ')
        prodotti[x].prezzo = input('Inserire il prezzo del prodotto ')
        prodotti[x].quantita = input("Inserire la quantita' del prodotto ")
        prodotti[x].reparto = input('Inserire il nome del reparto ')
        prodotti[x].codice = input('Inserire il codice del prodotto ')

def print_prodotto(x = None):
    if x == None:
        for x in range(15):
            print(prodotti[x])
            
    elif x != None:
        print(f"Nome articolo: {prodotti[x].nome}, Prezzo articolo: {prodotti[x].prezzo}, Quantita' articolo: {prodotti[x].quantita}, Reparto articolo: {prodotti[x].reparto}, Codice articolo: {prodotti[x].codice}")

def calcolo_minimo():
    prezzo_minimo: float = prodotti[0].prezzo
    for x in range(15):
        if prodotti[x].prezzo < prezzo_minimo:
            prezzo_minimo = prodotti[x].prezzo
        x+=1
    return prezzo_minimo

def totale_giacenza():
    totale_quantita: int = 0
    for x in range(15):
        totale_quantita+=prodotti[x].quantita
        x+=1
    return totale_giacenza

def prodotti_banco():
    contatore_prodotti: int = 0
    for x in range(15):
        if prodotti[x].reparto == "banco" or prodotti[x].reparto == "Banco" or prodotti[x].reparto == "BANCO":
            contatore_prodotti+=1
        x+=1
    return contatore_prodotti

def prezzo_superiore_a(prezzo_da_confrontare):
    for x in range(15):
        if prodotti[x].prezzo > prezzo_da_confrontare:
            print(prodotti[x].codice)
        x+=1

def media_casalinghi():
    media_prezzi_casalinghi: float = 0
    for x in range(15):
        if prodotti[x].reparto == "casalinghi" or prodotti[x].reparto == "Casalinghi" or prodotti[x].reparto == "CASALINGHI":
            media_prezzi_casalinghi += prodotti[x].prezzo
        x+=1
    return media_prezzi_casalinghi

def quantita_magg_20():
    for x in range(15):
        if prodotti[x].quantita > 20:
            print(prodotti[x].nome)
        x+=1

def main():
    scelta = input('Scegliere cosa fare 1-8')
    match scelta:
        case 1:
            carica_prodotto()
        
        case 2:
            print_prodotto()

        case 3:
            print(calcolo_minimo())

        case 4:
            print(totale_giacenza())

        case 5:
            print(prodotti_banco())

        case 6:
            prezzo_da_confrontare = input("Scegliere un prezzo da confrontare ")
            prezzo_superiore_a(prezzo_da_confrontare)
        case 7:
            print(media_casalinghi())

        case 8:
            quantita_magg_20()

if __name__ == '__main__':
    main()
else:
    print(f"You must run this file ({os.path.basename(__file__)}) as the main file")