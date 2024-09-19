#include<iostream>
#include<string.h>

using namespace std;
string input(){
  string kalimat;
    char huruf;
    int jumlah = 0;

    cout << "Masukkan kalimat (lebih dari 3 kata): ";
    getline(cin, kalimat);
    while (kalimat.size() <= 3) {
    cout << "Kalimat harus lebih dari 3 kata. Masukkan kalimat lagi: ";
    getline(cin, kalimat);
    }
    return kalimat;
}
char inputhuruf(){
    char huruf;
    cout << "Masukkan karakter yang ingin dicari: ";
    cin >> huruf;
    return huruf;


}
int jumlahkarakter(const string&kalimat, char huruf ){
    int jumlah = 0;
     //cout<< kalimat<< huruf<< endl;
    for (char c : kalimat) {
        if (c == huruf) jumlah++;
    }
    return jumlah;

}

int main(){
  string kalimat = input();
  char huruf = inputhuruf();
  int jumlah = jumlahkarakter(kalimat,huruf);
  cout<< " Jumlah Huruf '" << huruf << "' pada kalimat adalah: " <<jumlah<<endl;
  cout << " Panjang karakter kalimat: "<<kalimat.size() << " karakter" << endl<<endl<<endl;
  cout<< " THANK YOU SUDAH MEMAKAI APLIKASI SEDERHANA INI!! ";
    return 0;

}



