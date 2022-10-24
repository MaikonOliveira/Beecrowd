//1018 - Cédulas
//Developed by Maikon Oliveira

#include <iostream>
 
using namespace std;
 
int main(){
    int N, a, b, c, d, e, f, g;
    cin>>N;
    cout<<N<<endl;
    a=N/100;
    b=(N-a*100)/50;
    c=(N-a*100-b*50)/20;
    d=(N-a*100-b*50-c*20)/10;
    e=(N-a*100-b*50-c*20-d*10)/5;
    f=(N-a*100-b*50-c*20-d*10-e*5)/2;
    g=(N-a*100-b*50-c*20-d*10-e*5-f*2);
    cout<<a<<" nota(s) de R$ 100,00"<<endl;
    cout<<b<<" nota(s) de R$ 50,00"<<endl;
    cout<<c<<" nota(s) de R$ 20,00"<<endl;
    cout<<d<<" nota(s) de R$ 10,00"<<endl;
    cout<<e<<" nota(s) de R$ 5,00"<<endl;
    cout<<f<<" nota(s) de R$ 2,00"<<endl;
    cout<<g<<" nota(s) de R$ 1,00"<<endl;
}
