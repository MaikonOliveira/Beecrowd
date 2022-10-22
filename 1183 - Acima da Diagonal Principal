//1183 - Acima da Diagonal Principal
//Developed by Maikon Oliveira

#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    int i, j;
    char OP;
    float mat[12][12], soma=0;
    cout<<fixed<<setprecision(1); 
    cin>>OP;
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            cin>>mat[i][j];
        }
    }for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            if(i<j) soma+=mat[i][j];
        }
    }
    if(OP == 'M') cout<<soma/66<<endl;
    else if(OP == 'S') cout<<soma<<endl;
}
