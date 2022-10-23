#1040 - Média 3
#Developed by Maikon Oliveira

while True:
    try:
        notas=input()
        itens = notas.split(" ")
        vet= list(map(float, itens))
        media=(((float(vet[0])*2)/10.0)+((float(vet[1])*3)/10.0)+((float(vet[2])*4)/10.0)+((float(vet[3])*1)/10.0))
        print("Media: %.1f" % round(media,2))
        if(media<5.0):
            print("Aluno reprovado.")
        if(media>=7.0):
            print("Aluno aprovado.")
        if(media>=5.0):
            if(media<=6.9):
                print("Aluno em exame.")
                E=input()
                print("Nota do exame: %.1f" % round(float(E),2))
                mediaf=(media+float(E))/2
                if(mediaf>=5.0):
                    print("Aluno aprovado.")
                else:
                    print("Aluno reprovado.")
                print("Media final: %.1f" % round(mediaf,2))
    except EOFError:
        break
