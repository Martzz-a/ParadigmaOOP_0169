#include <iostream>
using namespace std;

class Barang{
public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    void printData(){
        cout << "Nama             : " << nama << endl;
        cout << "Jumlah           : " << jumlah << endl;
        cout << "Kategori         : " << kategori << endl;
        cout << "Tanggal Produksi : " << tanggalProduksi << endl;
        cout << endl;
    }
};

int main(){
    Barang elektronik;
    Barang nonElektronik;

    elektronik.nama = "Mesin Cuci";
    elektronik.jumlah = 110;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "2025-31-12";
    elektronik.printData();

    nonElektronik.nama = "Meja";
    nonElektronik.jumlah = 324;
    nonElektronik.kategori = "Non-Elektronik";
    nonElektronik.tanggalProduksi = "2025-31-12";
    nonElektronik.printData();
}