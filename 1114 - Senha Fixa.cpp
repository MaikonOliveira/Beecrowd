//1114 - Senha Fixa
//Developed by Maikon Oliveira

#include <iostream>

using namespace std;

int main(){
    int valor;
    do{
        cin>>valor;
        if(valor!=2002) cout<<"Senha Invalida"<<endl;
    }while(valor!= 2002);
    cout<<"Acesso Permitido"<<endl;
}
