//1808 - O Retorno do Rei
//Developed by Maikon Oliveira

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
  char nota[500];
  double n=0, qnt=0;
  cin >> nota;
  for(int i=0; nota[i]!='\0'; i++){
    if(nota[i] == '1' && nota[i+1] == '0'){
      n=n+10;
      i++;
    }else(n=n+(nota[i]-48)){
      qnt++;
    }
  }
  printf("%.2f\n", n/qnt);
}
