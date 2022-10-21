//1068 - Balanço de Parênteses I
//Developed by Maikon Oliveira

//1241 - Encaixa ou Não II
//Developed by Maikon Oliveira

#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    char vet[1000];
    int i,j,a=0,x=0;
    while(scanf("%s", &vet) != EOF){
        a=0;
        x=0;
        for(j=0;vet[j] != '\0';j++){
            if(vet[j] == ')' && a == 0) x++;
            if(vet[j] == '(') a++;
            if(vet[j] == ')') a--;
        }if(a==0 && x==0) cout<<"correct"<<endl;
        else cout<<"incorrect"<<endl;
    }
}
