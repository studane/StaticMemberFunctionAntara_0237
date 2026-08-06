#include <iostream>
using namespace std;

class mahasiswa {
public:
    mahasiswa();    // Constructor
};

mahasiswa::mahasiswa() {
    cout << "Constructor terpanggil" << endl; // definisi constructor
};

int main(){
    mahasiswa mhs;
    return 0;
}