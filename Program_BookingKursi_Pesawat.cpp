#include <iostream>

using namespace std;


// Ilustrasi Kursi Pesawat
char kursiChart[15][6] = {
{'X', 'X', '*', '*', '*', '*'},
{'*', '*', '*', 'X', 'X', '*'},
{'*', '*', 'X', 'X', '*', '*'},
{'*', '*', 'X', 'X', '*', '*'},
{'*', '*', '*', '*', '*', '*'},
{'*', '*', '*', 'X', 'X', 'X'},
{'*', '*', 'X', '*', '*', '*'},
{'*', '*', 'X', '*', '*', '*'},
{'X', 'X', '*', '*', '*', 'X'},
{'*', '*', '*', '*', 'X', 'X'},
{'*', '*', 'X', 'X', '*', '*'},
{'*', '*', '*', '*', '*', '*'},
{'*', '*', '*', '*', 'X', 'X'},
{'*', '*', '*', '*', 'X', '*'},
{'X', 'X', 'X', '*', 'X', '*'}
};

void printkursiChart() {
    cout << " SELAMAT DATANG DI APLIKASI BOOKING PESAWAT "<<endl;
    cout << " ( A / B / C / D / E / F ) " << endl;
    cout << " =================== "<<endl;
    for (int i = 0; i < 15; i++) {
        cout << " Baris " << i + 1 << " ";
        for (int j = 0; j < 6; j++) {
            cout << kursiChart[i][j] << " ";
        }
        cout << endl;
    }
}

//Input Kursi Kelas

void bookbangku(string KelasType, int nobangku) {
    int row;
    if (KelasType == "utama") {
        if (nobangku < 1 || nobangku > 2) {
            cout << " Gagal memilih untuk kelas utama " << endl;
            return;
        }
        row = nobangku - 1;
    } else if (KelasType == "bisnis") {
        if (nobangku < 3 || nobangku > 5) {
            cout << " Gagal memilih untuk kelas bisnis " << endl;
            return;
        }
        row = nobangku - 1;
    } else if (KelasType == "ekonomi") {
        if (nobangku < 6 || nobangku > 15) {
            cout << " Gagal memilih untuk kelas ekonomi " << endl;
            return;
        }
        row = nobangku - 1;
    } else {
        cout << " Gagal Memilih Tipe Kelas " << endl;
        return;
    }

// Pemilihan Bangku
    char col;
    cout << " Pilih Bangku yang mau dipilih (A-F): ";
    cin >> col;
    col = toupper(col);
    int colIndex = col - 65;
    if (kursiChart[row][colIndex] == 'X') {
        cout << " Pemesanan Bangku Tidak Berhasil " << endl;
        cout << " MAAF ! "<< endl;
    } else {
        kursiChart[row][colIndex] = 'X';
        cout << " Pemesanan Bangku Berhasil " << endl;
        cout << " TERIMA KASIH ! "<< endl;
    }
}

int main() {
    while (true) {
        printkursiChart();
        string KelasType;
        cout << " Pilih Tipe Kelas (utama/bisnis/ekonomi): ";
        cin >> KelasType;
        int nobangku;
        cout << " Masukkan Nomor Baris yang mau dipilih: ";
        cin >> nobangku;
        bookbangku(KelasType, nobangku);
    }
    return 0;
}