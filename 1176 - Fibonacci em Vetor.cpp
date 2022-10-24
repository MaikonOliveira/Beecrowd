//1176 - Fibonacci em Vetor
//Developed by Maikon Oliveira

#include <iostream>

using namespace std;

void fib(int x) {
    unsigned long long i = 0, j = 1;
    for (int k=0; k<x; k++) {
        i+=j;
        swap(i, j);
    }cout<<"Fib("<<x<<") = "<<i<<endl;
}

int main() {
    int t, x, i;
    cin>>t;
    for (i=0; i<t; i++){
        cin>>x;
        fib(x);
    }return 0;
}
