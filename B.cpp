#include <iostream>
using namespace std;


int main() {
    float a;
    cin >> a;
    if(a >= 50 && a < 75){
    	cout << "Satisfaz" << endl;
    }
    if(a >= 75 && a < 90){
        cout << "Satisfaz Bastante" << endl;
    }
    if(a >= 90 && a <= 100){
        cout << "Excelente" << endl;
    }
    if(a < 50 && a >= 0){
        cout << "Nao Satisfaz" << endl;
    }
    if(a < 0 || a > 100){
        cout << "Nota Invalida" << endl;
    }
}
