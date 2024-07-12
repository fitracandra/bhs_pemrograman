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
    cout << "====================== Menu Warung kelontong ======================" << endl;
    cout << left << setw(5) << "ID" << setw(30) << "Nama" << setw(10) << "Harga" << endl;
    cout << "-----------------------------------------------------------" << endl;
    for (const auto& item : menu) {
        cout << left << setw(5) << item.id << setw(30) << item.name << "Rp. " << fixed << setprecision(2) << item.price << endl;
    }
    cout << "===========================================================" << endl;
}

// Fungsi untuk memesan item dari menu
void placeOrder(const vector<MenuItem>& menu) {
    int id, quantity;
    double total = 0.0;

    cout << "Masukkan ID menu yang ingin dipesan (0 untuk selesai): ";
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
        cout << "Masukkan menu yang ingin dipesan (0 untuk selesai): ";
    }

    cout << "\nTotal pesanan: Rp. " << fixed << setprecision(2) << total << endl;
}

// Fungsi utama
int main() {
    // Inisialisasi menu dengan beberapa menu warung
    vector<MenuItem> menu = {
        {1, "Indomie Goreng", 3500.00},
        {2, "Indomie Kuah", 3000.00},
        {3, "Indomie Kari Ayam", 3000.00},
        {4, "Indomie Soto Mie", 2000.00},
        {5, "Indomie Ayam Bawang", 3000.00},
        {6, "Indomie Goreng Jumbo", 4000.00},
        {7, "mie sakura", 2500.00},
        {8, "mie Gaga goreng", 3000.00},
        {9, "mie Gaga kuah", 3000.00},
        {10, "surya 12", 28000.00},
        {11, "surya 16", 35000.00},
        {12, "online 16", 23000.00},
        {13, "online 20", 27000.00},
        {14, "onbold 16", 21000.00},
        {15, "onbold 20", 25000.00},
        {16, "gas 3kg", 22000.00},
        {17, "lemineral galon", 18000.00},
        {18, "aqua galon", 19000.00},
        {17, "cleo galon", 21000.00},
    };

    int choice;

    do {
        cout << "=============== Sistem Penjualan warung ===============" << endl;
        cout << "1. Tampilkan Menu" << endl;
        cout << "2. Buat Pesanan" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih opsi (1-3): ";
        cin >> choice;

        switch (choice) {
            case 1:
                displayMenu(menu);
                break;
            case 2:
                placeOrder(menu);
                break;
            case 3:
                cout << "Terima kasih telah menggunakan sistem penjualan kami." << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
        cout << endl;
    } while (choice != 3);

    return 0;
}
