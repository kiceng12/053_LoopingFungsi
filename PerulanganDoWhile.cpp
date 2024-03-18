#include <iostream>
using namespace std;

int main(){
    char pilihan;

    do{
        cout << "Berangkat ambil takjil" << endl;
        cout << "Antre takjil" << endl;
        cout << "Antri takjil" << endl;
        cout << "Apakah Takjil masih ada ?" << endl;
        cin >> pilihan;
    }while (pilihan == "y" || pilihan == "Y");
}