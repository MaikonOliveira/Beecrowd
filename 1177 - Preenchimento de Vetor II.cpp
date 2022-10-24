//1177 - Preenchimento de Vetor II
//Developed by Maikon Oliveira

#include <iostream>

using namespace std;

int main(){
    int vetor[1000];
    int i,t,cont=0;
    cin>>t;
    if(t>=2 && t<=50){
        for(i=0;i<1000;i++){
            vetor[i]=cont;
            cont++;
            if(cont==t) cont=0;
        }for(i=0;i<1000;i++){
            cout<<"N["<<i<<"] = "<<vetor[i]<<endl;
        }
    }
}
