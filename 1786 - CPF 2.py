# 1786 - CPF 2
# Developed by Maikon Oliveira

while True: 
    try:
        saida=[]
        cpf=[]
        soma1=0
        soma2=0
        count=1
        cont=1
        k=1
        entrada = input()
        saida=list(entrada)
        if(len(entrada) < 9):
            for k in range(9-len(entrada)):
                saida.append("0")    
        for value in saida:
            soma1 += int(value) * count
            soma2 += int(value) * (10-count)
            count += 1
        b1 = soma1%11
        b2 = soma2%11
        #print(b1)
        #print(b2)
        if(b1==10):
            b1=0
        if(b2==10):
            b2=0
        for x in saida:
            cpf.append(x)
            if(cont == 3) or (cont == 6):
                cpf.append(".")
            cont+=1
        cpf.append("-")
        cpf.append(str(b1))
        cpf.append(str(b2))
        final = ''.join(cpf)
        print(final)
    except EOFError:
        break
