#include <iostream>
using namespace std;

// Definisikan fungsi menu()
void menu() {
    cout << "Pilih operasi aritmetika:" << endl;
    cout << "1. Tambah" << endl;
    cout << "2. Kurang" << endl;
    cout << "3. Kali" << endl;
    cout << "4. Bagi" << endl;
    cout << "5. Keluar" << endl;
}

// Definisikan fungsi tambah()
void tambah() {
    int a, b, hasil;
    cout << "Masukkan bilangan pertama: ";
    cin >> a;
    cout << "Masukkan bilangan kedua: ";
    cin >> b;
    hasil = a + b;
    cout << "Hasil dari " << a << " + " << b << " adalah " << hasil << endl;
}

// Definisikan fungsi kurang()
void kurang() {
    int a, b, hasil;
    cout << "Masukkan bilangan pertama: ";
    cin >> a;
    cout << "Masukkan bilangan kedua: ";
    cin >> b;
    hasil = a - b;
    cout << "Hasil dari " << a << " - " << b << " adalah " << hasil << endl;
}

// Definisikan fungsi kali()
void kali() {
    int a, b, hasil;
    cout << "Masukkan bilangan pertama: ";
    cin >> a;
    cout << "Masukkan bilangan kedua: ";
    cin >> b;
    hasil = a * b;
    cout << "Hasil dari " << a << " x " << b << " adalah " << hasil << endl;
}

// Definisikan fungsi bagi()
void bagi() {
    float a, b, hasil;
    cout << "Masukkan bilangan pertama: ";
    cin >> a;
    cout << "Masukkan bilangan kedua: ";
    cin >> b;
    if (b != 0) {
        hasil = a / b;
        cout << "Hasil dari " << a << " / " << b << " adalah " << hasil << endl;
    } else {
        cout << "Kesalahan: Pembagian dengan nol tidak diperbolehkan." << endl;
    }
}

int main() {
    int choice;
    
    while (1) {
        menu();
        cout << "Pilih operasi: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                tambah();
                break;
            case 2:
                kurang();
                break;
            case 3:
                kali();
                break;
            case 4:
                bagi();
                break;
            case 5:
                cout << "Keluar dari program." << endl;
                return 0;
            default:
                cout << "Pilihan tidak valid. Coba lagi." << endl;
        }
    }

    return 0;
}
