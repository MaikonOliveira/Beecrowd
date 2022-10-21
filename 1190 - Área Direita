//1190 - Área Direita
//Developed by Maikon Oliveira

#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    cout<<fixed<<setprecision(1);
    char OP;
    double mat[12][12], soma=0;
    int i, j;
    cin>>OP;
    for(i=0;i<12;i++){
        for(j=0;j<12;j++) cin>>mat[i][j];
    }for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            if(i<j && (i+j)>11) soma+=mat[i][j];
        }
    }if(OP=='M') cout<<soma/30<<endl;
    else if(OP=='S') cout<<soma<<endl;
}
