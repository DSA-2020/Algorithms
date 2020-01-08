def search(txt,ptn) :
    n = len(txt)
    m = len(ptn)

    for i in range(n - m + 1) :
        j = 0
        while(j < m) :
            if txt[i + j] != ptn[j] :
                break 
            j += 1
        if j == m :
            print "Pattern fount at index " + str(i)


if __name__ == "__main__" :
    txt = raw_input("")
    ptn = raw_input("")
    search(txt,ptn)
