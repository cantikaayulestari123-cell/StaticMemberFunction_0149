#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
    private:
        int nim;
        string nama;
    public:
        Mahasiswa();
        Mahasiswa(int);
        Mahasiswa(string);
        Mahasiswa(int nim, string nama);
        void cetak();
};

Mahasiswa::Mahasiswa() {}

Mahasiswa::Mahasiswa(int inim) {
    nim = inim;
}
Mahasiswa::Mahasiswa(string inama) {
    nama = inama;
}

Mahasiswa::Mahasiswa(int inim, string inama) {
    nim = inim;
    nama = inama;
}

void Mahasiswa::cetak() {
    cout << "NIM    : " << nim << endl;
    cout << "Nama   : " << nama << endl;
}
int main() {
    Mahasiswa mhs1(102030);
    Mahasiswa mhs2("Andi");
    Mahasiswa mhs3(01023, "Santi");

    //tampilkan nilai
    cout << "Mahasiswa 1:; mhs.cetak()";
    cout << "Mahasiswa 1:; mhs.cetak()";
    cout << "Mahasiswa 1:; mhs.cetak()";
    return 0;
}
