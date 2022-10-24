//1042 - Sort Simples
//Developed by Maikon Oliveira

#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;
    if (a > b && a > c){ 
        if (b > c) cout << c << endl << b << endl << a << endl << endl << a << endl << b << endl << c << endl;
        else if (b < c) cout << b << endl << c << endl << a << endl << endl << a << endl << b << endl << c << endl;   
    }else if (b > a && b > c){ 
        if(a > c) cout << c << endl << a << endl << b << endl << endl << a << endl << b << endl << c << endl;
        else if(a < c) cout << a << endl << c << endl << b << endl << endl << a << endl << b << endl << c << endl;
    }else if (c > a && c > b){ 
        if (a > b) cout << b << endl << a << endl << c << endl << endl << a << endl << b << endl << c << endl;
        else if(a < b) cout << a << endl << b << endl << c << endl << endl << a << endl << b << endl << c << endl;
    }
}
