#include <iostream>
#include <string>

using namespace std;

int main(){
  string konfirmasi;
  int nilai;
  int lulus = 0;
  int perbaikan = 0;
  int tidak_lulus = 0;
 

 cout << " Anda mau masukkan nilai mahasiswa? ";
  getline(cin, konfirmasi);

  while(( konfirmasi == "ya") || (konfirmasi == "yes")) {
    cout << " Masukkan Nilai Mahasiswa :" << endl;
    cin >> nilai;
  
  if(nilai >=70){
    lulus = lulus+1;
  }
  else if ((nilai >= 50) && (nilai <=70)){
    perbaikan = perbaikan+1;
  }
  else if ( nilai <=50){
    tidak_lulus = tidak_lulus+1;
  }
  cout << "Apakah anda ingin memasukkan nilai ?" << endl;
  cin >> konfirmasi;

  if ((konfirmasi == "exit") || (konfirmasi == "tidak")){
    break;
  }



  }
  cout << "Mahasiswa yang LULUS Berjumlah = " << lulus << endl;
  cout << "Mahasiswa yang PERBAIKAN Berjumlah = " << perbaikan << endl;
  cout << "Mahasiswa yang TIDAK LULUS Berjumlah = " << tidak_lulus << endl;

}