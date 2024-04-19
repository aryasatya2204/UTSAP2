#include <iostream>
using namespace std; //Kurang kata namespace

int main () {
    system ("CLS");

    int a; //tipe datanya integer bukan string

    umur : // tidak menggunakan ; seharusnya menggunakan :
    cout << "Tebak Umur Saya : "; // kurang ; di akhir line
    cin >> a; // dalam cin tidak menggunakan tanda "<<" seharusnya ">>"

    //seharusnya menggunakan == untuk perbandingan nilai 
    cout << "Jawaban Anda Benar" << endl;
    if (a == 20){ 
    } else {
        cout << "Jawaban Salah, Coba Lagi..." << endl; // kurang ; di akhir line
        goto umur;
    }
    
    cout << "Program Selesai";

    return 0;
}
