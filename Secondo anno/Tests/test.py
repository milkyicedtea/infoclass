from re import X


def test():
    x = 0
    print(f'x = {x}, id = {id(x)}')
    x+=1
    print(f'x = {x}, id = {id(x)}')

    if int(input()) == 1: 
        y = x
        print(f'y = {y}, id = {id(y)}')

if __name__ == "__main__":
    test()