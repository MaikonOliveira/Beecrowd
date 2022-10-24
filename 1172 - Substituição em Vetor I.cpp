//1172 - Substituição em Vetor I
//Developed by Maikon Oliveira

#include <iostream>
#define n 10

using namespace std;

int main(){
    int x[n], i;
    for(i=0;i<=9;i++){
        cin>>x[i];
        if(x[i]<=0){
            x[i]=1;
            cout<<"X["<<i<<"] = "<<x[i]<<endl;
        }else cout<<"X["<<i<<"] = "<<x[i]<<endl;
    }
}
