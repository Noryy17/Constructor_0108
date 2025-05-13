#include <iostream>
using namespace std;

class buku {
    string judul;
    public:
    string setget(string jdl){
        //Nilai Parameter 'Judul' untuk member variable
        this ->judul = jdl;
        //return variable judul
        return this ->judul;
    }
};

int main(){
    buku bukunya;
    cout<<bukunya.setget("Mahasiswa");
    return 0;
}