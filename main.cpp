#include <iostream>
#inlcude <string>
using namespace std;

int main() {
    string  tujuan [3] = {"malang-jogja","malang- bandung", "malang -jakarta"} ;
    int harga [3] = {35000 ,25000 ,35000};

    int pilihan, jumlah, total;
    string ulang;

    do {
        cout << "================================" << endl;
        cout << "       PEMESANAN TIKET BUS      " << endl;
        cout << "================================" << endl;

        cout << "1. Malang - Jogja   : Rp35000" << endl;
        cout << "2. Malang - Bandung : Rp25000" << endl;1
        
        cout << "3. Malang - Jakarta : Rp35000" << endl;

        cout << "--------------------------------" << endl;

        cout << "Pilih tujuan (1-3): ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 3) {

            cout << "Tujuan perjalanan : "
                 << tujuan[pilihan - 1] << endl;

            cout << "Jumlah penumpang : ";
            cin >> jumlah;

            if (jumlah > 0) {

                total = harga[pilihan - 1] * jumlah;

                cout << "\n===== RINCIAN PEMBAYARAN =====" << endl;
                cout << "Tujuan           : "
                     << tujuan[pilihan - 1] << endl;

                cout << "Harga tiket      : Rp"
                     << harga[pilihan - 1] << endl;

                cout << "Jumlah penumpang : "
                     << jumlah << endl;

                cout << "Total pembayaran : Rp"
                     << total << endl;

            } else {
                cout << "Jumlah penumpang tidak valid!" << endl;
            }

        } else {
            cout << "Pilihan tujuan tidak tersedia!" << endl;
        }

        cout << "\nPesan tiket lagi? (y/n): ";
        cin >> ulang;

    } while (ulang == "y" || ulang == "Y");

    cout << "\nTerima kasih Sudah Memesan!" << endl;




        
    return 0;
}
