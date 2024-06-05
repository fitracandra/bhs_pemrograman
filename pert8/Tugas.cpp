#include <iostream>
#include <vector>
#include <string>
#include <iomanip>  // Untuk mengatur format output

using namespace std;

// Struktur untuk menyimpan informasi menu
struct MenuItem {
    int id;
    string name;
    double price;
};

// Fungsi untuk menampilkan menu restoran
void displayMenu(const vector<MenuItem>& menu) {
    cout << "====================== Menu ======================" << endl;
    cout << left << setw(5) << "ID" << setw(20) << "Nama" << setw(10) << "Harga" << endl;
    cout << "-------------------------------------------------" << endl;
    for (const auto& item : menu) {
        cout << left << setw(5) << item.id << setw(20) << item.name << "Rp. " << fixed << setprecision(2) << item.price << endl;
    }
    cout << "=================================================" << endl;
}

// Fungsi untuk menambahkan item baru ke menu
void addMenuItem(vector<MenuItem>& menu) {
    MenuItem newItem;
    newItem.id = menu.size() + 1;

    cout << "Masukkan nama item: ";
    cin.ignore();  // Membersihkan buffer input
    getline(cin, newItem.name);

    cout << "Masukkan harga item: Rp. ";
    cin >> newItem.price;

    menu.push_back(newItem);

    cout << "Item berhasil ditambahkan ke menu." << endl;
}

// Fungsi untuk memesan item dari menu
void placeOrder(const vector<MenuItem>& menu) {
    int id, quantity;
    double total = 0.0;

    cout << "Masukkan ID item yang ingin dipesan (0 untuk selesai): ";
    while (cin >> id && id != 0) {
        bool found = false;
        for (const auto& item : menu) {
            if (item.id == id) {
                cout << "Masukkan jumlah: ";
                cin >> quantity;
                total += item.price * quantity;
                cout << "Ditambahkan: " << item.name << " x" << quantity << " (Rp. " << item.price * quantity << ")" << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "ID tidak valid. Coba lagi." << endl;
        }
        cout << "Masukkan ID item yang ingin dipesan (0 untuk selesai): ";
    }

    cout << "\nTotal pesanan: Rp. " << fixed << setprecision(2) << total << endl;
}

// Fungsi utama
int main() {
    vector<MenuItem> menu;
    int choice;

    do {
        cout << "=============== Sistem Pemesanan Restoran ===============" << endl;
        cout << "1. Tampilkan Menu" << endl;
        cout << "2. Tambah Item ke Menu" << endl;
        cout << "3. Buat Pesanan" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih opsi (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                displayMenu(menu);
                break;
            case 2:
                addMenuItem(menu);
                break;
            case 3:
                placeOrder(menu);
                break;
            case 4:
                cout << "Terima kasih telah menggunakan sistem pemesanan kami." << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
        cout << endl;
    } while (choice != 4);

    return 0;
}
