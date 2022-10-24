#1009 - Salário com Bônus
#Developed by Maikon Oliveira

while True:
    try:
        vendedor=input()
        salario=input()
        venda=input()
        comissao=float(venda)*15
        total=(comissao/100)+float(salario)
        print("TOTAL = R$ %.2f" % total)
    except EOFError:
        break
