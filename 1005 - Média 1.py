#1005 - Média 1
#Developed by Maikon Oliveira

while True:
    try:
        A=input()
        B=input()
        media=(((float(A)*3.5)/11.0)+((float(B)*7.5)/11.0))
        print("MEDIA = %.5f" % media)
    except EOFError:
        break
