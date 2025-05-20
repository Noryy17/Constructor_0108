#include <iostream>
#include <string>
using namespace std;


class Barang {
    public :

    //Constructor dengan parameter
   int namaBarang;
   string kodeBarang; 
   Barang(int kodeBarang, string namaBarang);
   
   //Definisi Constructor dengan parameter
void MenampilkanInfo(){
    cout << "Memunculkan Informasi Barang" <<endl;
    cout << "Kode Barang  : " << kodeBarang << endl;
    cout << "Nama Barang  : " << namaBarang << endl;
}  
};



int main (){
    //Memanggil Constructor Dengan Parameter
    Barang prt(132692, "Teh Kotak");
    prt.MenampilkanInfo();
    return 0;

}