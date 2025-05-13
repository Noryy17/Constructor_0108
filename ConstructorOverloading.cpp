#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
    private:
    int nim;
    string nama;
    public:
    mahasiswa ();
    mahasiswa (int);
    mahasiswa (string);
    mahasiswa (int Inim, string Inama);
    void cetak();
};
mahasiswa :: mahasiswa(){

}
mahasiswa :: mahasiswa(int INim){
    nim = INim; //DEFINISI HANYA NIM
}

mahasiswa :: mahasiswa (string iNama){
    nama = iNama; //DEFINISI Hanya Nama
}

int main(){
    mahasiswa mhs1(102030);     // Hanya Nim
    mahasiswa mhs2("Andi");     // Hanya Nama
}