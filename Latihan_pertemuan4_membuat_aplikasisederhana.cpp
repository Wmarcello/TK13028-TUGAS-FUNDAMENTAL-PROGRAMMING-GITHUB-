#include<iostream>
#include<string>

using namespace std;

int main(){
  string nama, password;
  cout<<" Masukkan Nama : ";
  cin>>nama;
  cout<<" Masukkan Password : ";
  cin>>password;

  if(nama== "Marcello" && password == "cellogans"){
    cout<<" Selamat datang "<<nama<<"!"<<endl;
    int pilih;
    cout<<" Pilihan Menu :"<<endl;
    cout<<" 1. FAKTORIAL "<<endl;
    cout<<" 2. PENAMBAHAN " <<endl;
    cout<<" 3. Rata-Rata " <<endl;
    cout<<" Masukkan Pilihan Kamu : ";
    cin>>pilih;

    switch(pilih){
      case 1: {
          int number;
          cout<<" Masukkan Nilai : ";
          cin>> number;
          int fak = 1;
          for(int i = 1; i<number; i++){
             fak *= i;

          }
          cout<<" FAKTORIALNYA DARI "<<number<<"  ADALAH "<<fak <<endl;
          break;
      }
      case 2: {
        int x ,y;
        cout<<" Masukkan dua angka pertambahan: ";
        cin>> x >> y;
        cout<<" Pertambahan angka " << x << " Tambah " << y << " Adalah " << x + y <<endl;
        break;
      }
      case 3: {
        int a , b , c;
        cout<<" Masukkan tiga angka rata-rata: ";
        cin>>a>>b>>c;
        cout<<" Hasil Rata-rata " << a << " dari " <<b<< " dan " << c << " adalah " << (a+b+c)/3 <<endl;
        break;
      }
      default:
      cout << "Gagal memilih! "<<endl;
      return 1;
    }
    cout<<" TERIMA KASIH TELAH MEMAKAI APLIKASI SAYA !"<< endl;
      }
      else{
        cout<<" Nama dan Password SALAH! "<< endl;
        return 1;
      }
      return 0;
}