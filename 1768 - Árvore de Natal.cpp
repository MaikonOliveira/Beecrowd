//1768 - Arvore de Natal
//Developed by Maikon Oliveira

#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int t=0,i,k,a=0;
    while(scanf("%d", &t) != EOF){
        a=(t/2)+1;
        char mat[a][t];
        for(i=0;i<a;i++){
            for(k=0;k<t;k++){
                if(i+k >= a-1) mat[i][k]='*';
                if((k-i > a-1) || (i+k < a-1)) mat[i][k]=' ';
            }
        }for(i=0;i<a;i++){
            for(k=0;k<t;k++){
                if(k-i < a) cout<<mat[i][k];
            }
            cout<<endl;
        }for(i=0;i<a-1;i++) cout<<" ";
        cout<<"*"<<endl;
        for(i=0;i<a-2;i++) cout<< " ";
        cout<<"*"<<"*"<<"*"<<endl<<endl;
    }
}
