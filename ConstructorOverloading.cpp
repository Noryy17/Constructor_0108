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
    mahasiswa mhs3(010203, "Santi"); //NIM dan Nama

    //Tampilkan Nilai
    cout << "Mahasiswa 1 : "; mhs1.cetak();
    cout << "Mahasiswa 2 : "; mhs2.cetak();
    cout << "Mahasiswa 3 : "; mhs3.cetak();

    return 0;
}