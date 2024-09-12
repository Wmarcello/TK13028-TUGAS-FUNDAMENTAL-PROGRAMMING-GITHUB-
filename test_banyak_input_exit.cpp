#include <iostream>

using namespace std;

int main(){
  int no = 1;
  string struktur;
  
  // Pencetakan input 
  cout << " Apakah anda mau melakukan pencetakan ke :"<< no << endl;
  cin >> struktur;

  while(struktur != "exit"){
    cout << "Apakah anda mau melakukan pencetakan program c++ ke : ";
    cin >> struktur;
  }

  if(struktur == "exit"){
     cout << "Thank you";
  }
  
  return 0;

}