//1012 - Área
//Developed by Maikon Oliveira

#include<iostream>
#include <iomanip>
 
using namespace std;

int main(){
    float A,B,C;
    cout<<fixed<<setprecision(3);
    cin>>A>>B>>C;
    cout<<"TRIANGULO: "<<((A*C)/2)<<endl;
    cout<<"CIRCULO: "<<((C*C)*3.14159)<<endl;
    cout<<"TRAPEZIO: "<<(((A+B)*C)/2)<<endl;
    cout<<"QUADRADO: "<<(B*B)<<endl;
    cout<<"RETANGULO: "<<(A*B)<<endl;
}
