#include <iostream>
using namespace std;
class pointer{
  public:
    void input();
    void proses();
    void output();
  private:
    int *nim;
    int nimfinalis[5];
    string *nama;
    string namafinalis[5];
    int n;
};

  void pointer::input(){
cout<<"================================================"<<endl;
cout << "\tData Nim dan Nama Finalis Parmatika"<<endl<<endl;
    cout<<"\t\t\t\t tahun 2022"<<endl;
cout<<"================================================"<<endl;
    cout<<"masukkan jumlah finalis lomba -> ";cin>>n;
    for (int i=0; i<n; i++){//loping untuk input
      cout << "Masukkan NIM Finalis : ";
      cin >> nimfinalis[i];//data nim masuk ke nimfinalis
      cout << "Masukkan Nama Finalis : ";
      cin >> namafinalis[i];//data nama masuk ke namafinalis
      cout<<"======================================="<<endl;
    }
  }
  void pointer::proses(){
    nim = new int[n];
    nama = new string[n];
    for(int i=0; i<n; i++){
      *nim = nimfinalis[i];
      nim += 1;
      *nama = namafinalis[i];
      nama +=1;
    }
  }
  void pointer::output(){
     
    nama = nama - n;
    nim = nim - n;
    cout<<"\n\nMenampilkan data mahasiswa yang masuk ke babak final"<<endl;
    for (int i=0; i<n; i++) {
      cout << "\nNama finalis ke-" << i+1 << " : ";
      cout << *nama <<endl;
      cout << "Alamat Nama :"<<&nama;
      nama += 1;
      cout << "\nNim finalis  ke- "<<i+1 <<" : " ;
      cout << *nim<<endl;
      cout << "Alamat Nim :"<<&nim;
      nim += 1;
      cout<<endl;
      cout<<"======================================"<<endl;
    }
  }

int main(){
  pointer finsl;
  finsl.input();
  finsl.proses();
  finsl.output();
  
}
