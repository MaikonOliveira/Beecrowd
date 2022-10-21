//1180 - Menor e Posição
//Developed by Maikon Oliveira

#include <iostream>

using namespace std;

int main(){
    int N,i,aux,p;
    cin>>N;
    int vet[N];
    if(N>1 && N<1000){
        for(i=0;i<N;i++) cin>>vet[i];
        aux=vet[0];
        p=0;
        for(i=1;i<N;i++){
            if(aux > vet[i]){
                aux=vet[i];
                p=i;
            }
        }
        cout<<"Menor valor: "<<aux<<endl;
        cout<<"Posicao: "<<p<<endl;
    }
}
