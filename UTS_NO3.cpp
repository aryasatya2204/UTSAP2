#include <iostream>
using namespace std;

main(){
    int n, j;
    char ulang;

    a :
    system("cls");
    cout << "Masukan Sebuah Angka : "; cin >> n;
    j=0;
    for (int i=1; i<=n; i+=2){
        cout << i << " ";
        j += i*i;
    }
        cout << " " << endl;
        cout << " " << endl;
        cout << "Jadi Hasil penjumlahan bilangan ganjil kuadrat dari 1 sampai "<< n << " adalah " << j << endl;
        cout << "Apakah Ingin Memasukan angka Lain (Y/T)?"; cin >> ulang;
    if (ulang == 'y' || ulang == 'Y'){
        goto a;
    } else {
        cout << "---Program Selesai---";
    }
}

