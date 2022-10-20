//1310 - Lucro
//Developed by Maikon Oliveira

#include <cstdio> 

using namespace std; 
int vetor[51];

int main(void){
  int n, custo=0, valor=0, max, total;
  while(scanf("%d", &n)== 1){		
    scanf("%d", &custo);	
    max = 0, total = 0; 
    for(int i =0;i<n;i++){		
      scanf("%d", &valor);		
      vetor[i] = valor - custo;	
    }for(int i =0;i<n;i++){		
      total += vetor[i];	
      if(total < 0) total = 0;
      if(max < total) max = total;
    }printf("%d\n", max);
   } 	
   return 0;
}
