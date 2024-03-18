#include <iostream>
using namespace std;

string nama;
int nXpander, nPorsche, nAvanza, nBrio, nLamborghini;
int hXpander = 300, hPorsche= 8000, hAvanza = 250, hBrio = 200, hLamborghini =6000


void input(){
    cout << "Nama Pembeli : ";
    cin >> nama;
    cout << "JUmlah Xpander: ";
    cin >> nXpander;

    cout << "Jumlah Porsche: ";
    cin >> nPorsche;

    cout << "Jumlah Avanza: ";
    cin >> nAvanza;

    cout << "Jumlah Brio: ";
    cin >> nBrio;

    cout << "JUmlah Lambirghini: ";
    cin >> nLamborghini;
}

int Totalharga(){
    return (nXpander * hXpander) + (nPorsche * hPorsche) + (nAvanza * hAvanza) + (nBrio * hBrio);
}

void Display(){
    cout << "Total Harganya : " << TotalHarga() << endl;    
}

int main(){
    char pilihan;
    d0{    
    input();
    Display();
    cout << "Apakah ingin membeli kembali ? ";
    cin >> pilihan;
    }while(pilihan == "y"||pilihan == "Y"); 
}