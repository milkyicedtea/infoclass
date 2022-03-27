for i in range(100):        #ripeti 100 volte
    f = open('ascii.txt', 'r')      #open file in read mode
    for x in f:     #for righe in file print riga
        print(x, end="")        #print riga with no end
f.close()       #close file or bad