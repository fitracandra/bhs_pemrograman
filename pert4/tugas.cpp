#include <iostream>

using namespace std;

void tambah(int angka1, int angka2){
    cout << "TAMBAH : " << angka1 + angka2 << endl;
}

void kurang(int angka1, int angka2){
    cout << "KURANG : " << angka1 + angka2 << endl;
}

void kali(int angka1, int angka2){
    cout << "KALI : " << angka1 + angka2 << endl;
}

void bagi(int angka1, int angka2){
    cout << "BAGI : " << angka1 + angka2 << endl;
}

int main (){
    int angka1, angka2;
    char pilih;
    do{
        cout << "MENU" << endl;
        cout << "1.Tambah" << endl;
        cout << "2.Kurang" << endl;
        cout << "3.kali" << endl;
        cout << "4.bagi" << endl;
        cout << "Pilihan : " ;
        cin >> pilih;

        switch (pilih){
            case 1:
            cout << "Masukan angka : ";
            cin >> amgka1 >> angka2;
            tambah(angka1, angka2)

             case 2:
            cout << "Masukan angka : ";
            cin >> amgka1 >> angka2;
            kurang(angka1, angka2)

             case 3:
            cout << "Masukan angka : ";
            cin >> amgka1 >> angka2;
            kali(angka1, angka2)

             case 4:
            cout << "Masukan angka : ";
            cin >> amgka1 >> angka2;
            bagi(angka1, angka2)
        }
    }while(pilih != '5')
    tambah();
    kurang();
    kali();
    bagi();
    return 0;
}