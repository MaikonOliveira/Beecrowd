//1181 - Linha na Matriz
//Developed by Maikon Oliveira

#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    cout<<fixed<<setprecision(1);
    int N,i,j;
    float soma=0;
    float mat[12][12];
    char OP;
    cin>>N;
    cin>>OP;
    if(N>-1 && N<12){
        for(i=0;i<12;i++){
            for(j=0;j<12;j++){
            cin>>mat[i][j];
        }
        }for(i=0;i<12;i++) soma+=mat[N][i];
        if(OP=='S') cout<<soma<<endl;
        else if(OP=='M'){
            cout<<soma/12<<endl;
        }
    }
}
