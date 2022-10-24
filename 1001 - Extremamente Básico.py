#1001 - Extremamente Básico
#Developed by Maikon Oliveira

while True:
    try:
        A=input()
        B=input()
        print("X =",int(A)+int(B))
    except EOFError:
        break
