from dataclasses import dataclass

@dataclass
class ppProperties():
    lungezza: float = 0.5
    altezza: float = 0.5
    profonditezza: float = 0.5


@dataclass
class flavius():
    pp = ppProperties()
    nazionalita: str = "rumeno"
    gay: bool = False
    eta: float = 3.5

def flaviusfunzione():
    print(flavius.pp.altezza)
    flavius.pp.altezza = input("Bad ")
    print(flavius.pp.altezza)

if __name__ == "__main__":
    flaviusfunzione()