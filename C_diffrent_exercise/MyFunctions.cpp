#include <iostream>
using namespace std;

bool isPrime(long Zahl);

int main() {
    //************************
    double Wert = 0.0;
    int N;
    cout << "Eingabe N = ";
    cin >> N;
    Wert = Fakultaet(N);
    cout << endl << "Fakultaet von " << N << " = " << Wert << endl;


    //***********************
    long Testzahl = 0;
    bool Ergebnis = false;

    cout << "Hello World!\n";

    cout << "Testzahl: ";
    cin >> Testzahl;

    Ergebnis = isPrime(Testzahl);       //Call by value
    if (Ergebnis) {
        cout << endl << "Die Zahl "<< Testzahl << " ist eine Primzahl!";
    }
    else {
        cout << endl << "Die Zahl "<< Testzahl << " ist keine Primzahl!";
    }
    return 0;
}
