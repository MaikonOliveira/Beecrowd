//1241 - Encaixa ou Não II
//Developed by Maikon Oliveira

#include <iostream>
#include <string.h>

using namespace std;

int main(){
  int qtd = 0,N,i,j;
  char str1[1000], str2[1000];
  cin>>N;
  for(i=0; i<N; i++){
    cin>>str1>>str2;
    if(strlen(str2) > strlen(str1)){
        cout<<"nao encaixa"<<endl;
        continue;
    }if(strcmp(str1, str2) == 0){
        cout<<"encaixa"<<endl;
        continue;
    }for(j=0; j<strlen(str2); j++){
        if(str1[strlen(str1)-strlen(str2)+j] == str2[j]) qtd++;
        else{
        qtd=-1;
        break;
        }
    }
    if(qtd==-1) cout<<"nao encaixa"<<endl;
    else cout<<"encaixa"<<endl;
    }
}
