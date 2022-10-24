//1828 - Bazinga!
//Developed by Maikon Oliveira

#include <iostream>

using namespace std;

int main (){
    int n,i;
    string a,b;
    cin>>n;
    if(n<=100){
        for(i=1;i<n+1;i++){
            cin>>a;
            cin>>b;
            //Caso Sheldon vencer:
            if(a=="tesoura" && (b=="papel" || b=="lagarto")) cout<<"Caso #"<<i<<": Bazinga!"<<endl;
            else if(a=="papel" && (b=="pedra" || b=="Spock")) cout<<"Caso #"<<i<<": Bazinga!"<<endl;
            else if(a=="pedra" && (b=="lagarto" || b=="tesoura")) cout<<"Caso #"<<i<<": Bazinga!"<<endl;
            else if(a=="lagarto" && (b=="Spock" || b=="papel")) cout<<"Caso #"<<i<<": Bazinga!"<<endl;
            else if(a=="Spock" && (b=="tesoura" || b=="pedra")) cout<<"Caso #"<<i<<": Bazinga!"<<endl;
            // Caso Raj vencer:
            else if(b=="tesoura" && (a=="papel" || a=="lagarto")) cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
            else if(b=="papel" && (a=="pedra" || a=="Spock")) cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
            else if(b=="pedra" && (a=="lagarto" || a=="tesoura")) cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
            else if(b=="lagarto" && (a=="Spock" || a=="papel")) cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
            else if(b=="Spock" && (a=="tesoura" || a=="pedra")) cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
            //Caso der empate:
            else if(a == b) cout<<"Caso #"<<i<<": De novo!"<<endl;
        }
    }
}
