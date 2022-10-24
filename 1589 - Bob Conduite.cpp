//1589 - Bob Conduite
//Developed by Maikon Oliveira

#include <iostream>

using namespace std;

int main(){
    int N,i,R1,R2;
    cin>>N;
    int vet[N];
    if(N<=10000){
        for(i=0;i<N;i++){
            cin>>R1>>R2;
            vet[i]=R1+R2;
        }for(i=0;i<N;i++) cout<<vet[i]<<endl;
    }
}
