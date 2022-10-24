#1006 - Média 2
#Developed by Maikon Oliveira

while True:
    try:
        A=input()
        B=input()
        C=input()
        media=((float(A)*2)/10.0)+((float(B)*3)/10.0)+((float(C)*5)/10.0)
        print("MEDIA = %.1f" % media)
    except EOFError:
        break
