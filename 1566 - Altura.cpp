//1566 - Altura
//Developed by Maikon Oliveira

#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main(){
    long int N;
    int NC,i,k;
    scanf("%d", &NC);
    for(i=0; i<NC; i++){
        scanf("%d", &N);
        int vet[N];
        for(k=0; k<N; k++) scanf("%d", &vet[k]);
        sort(vet, vet+N);
        for(k=0; k<N-1; k++) printf("%d ", vet[k]);
        printf("%d\n", vet[k]);
    }
    return 0;
}
