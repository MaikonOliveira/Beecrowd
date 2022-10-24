//1010 - Cálculo Simples
//Developed by Maikon Oliveira

#include<iostream>
#include <iomanip>

using namespace std;

int main(){
    int N1,C1,C2,N2;
    float V1, V2;
    cout<<fixed<<setprecision(2);
    cin>>C1>>N1>>V1>>C2>>N2>>V2;
    cout<<"VALOR A PAGAR: R$ "<<((N1*V1)+(N2*V2))<<endl;
}
