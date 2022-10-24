#1002 - Área do Círculo
#Developed by Maikon Oliveira

while True:
    try:
        raio=input()
        area=(3.14159*(float(raio)*float(raio)))
        print("A=%.4f" % area)
    except EOFError:
        break
