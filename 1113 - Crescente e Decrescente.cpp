//1113 - Crescente e Decrescente
//Developed by Maikon Oliveira

#include <iostream>

using namespace std;

int main(){
    int x, y;
    cin>>x>>y;
    while(x!=y){
        if(x>y) cout<<"Decrescente"<<endl;
        else cout<<"Crescente"<<endl;
        cin>>x>>y;
    }
}
