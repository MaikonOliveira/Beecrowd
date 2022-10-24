//1192 - O jogo Matemático de Paula
//Developed by Maikon Oliveira

#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main(){
  int a,c,t,n;
  char b;
  while(scanf("%d", &n) != EOF){
    for (int i=0;i<n;i++){
      cin>>a>>b>>c;
      if(a==c) t=a*c;
      else if(b>=45 && b<=90) t=c-a;
      else if(b>=97 && b<=122) t=a+c;
      cout<<t<<endl;
    }
  }
}
