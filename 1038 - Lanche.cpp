//1038 - Lanche
//Developed by Maikon Oliveira

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int codigo, qnt;
    cout<<fixed<<setprecision(2);
    cin>>codigo>>qnt;
    if(codigo == 1) cout << "Total: R$ " << qnt*4.00 << endl;
    else if (codigo == 2) cout << "Total: R$ " << qnt*4.50 << endl;
    else if (codigo == 3) cout << "Total: R$ " << qnt*5.00 << endl;
    else if (codigo == 4) cout << "Total: R$ " << qnt*2.00 << endl;
    else if (codigo == 5) cout << "Total: R$ " << qnt*1.50 << endl;
}
