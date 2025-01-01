#include <iostream>
using namespace std;

int main() {
    string tanggal;
    int jumlahProduk, jumlahCacat;

    // Input data produksi
    cout << "=== Input Data Produksi Harian ===" << endl;
    cout << "Masukkan Tanggal Produksi (YYYY-MM-DD): ";
    cin >> tanggal;
    cout << "Masukkan Jumlah Produk yang Diproduksi: ";
    cin >> jumlahProduk;
    cout << "Masukkan Jumlah Produk Cacat: ";
    cin >> jumlahCacat;

    // Menampilkan data produksi
    cout << "\n=== Laporan Produksi Harian ===" << endl;
    cout << "Tanggal Produksi: " << tanggal << endl;
    cout << "Jumlah Produk Diproduksi: " << jumlahProduk << endl;
    cout << "Jumlah Produk Cacat: " << jumlahCacat << endl;
    cout << "Produk Layak: " << (jumlahProduk - jumlahCacat) << endl;

    return 0;
}