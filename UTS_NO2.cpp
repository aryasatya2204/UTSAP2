#include <iostream>
using namespace std;

main(){
    int pilih;
    char g;

    x :
    system("cls");
    cout << "Daftar Nama Presiden Indonesia :\n ";
    cout << "1. Soekarno\n ";
    cout << "2. Soeharto\n ";
    cout << "3. B.J. Habibie\n ";
    cout << "4. Abdurrahman Wahid\n ";
    cout << "5. Megawati Soekarno Putri\n ";
    cout << "6. Susilo Bambang Yudhoyono\n ";
    cout << "7. Joko Widodo\n ";
    cout << "8. Prabowo Subianto\n ";
    cout << "Masukan Pilihan Presiden Anda :"; cin >> pilih;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;

    switch (pilih){
        case 1 : 
            cout << "Pilihan anda telah disimpan, pilihan anda adalah 1. soekarno ";
            break;
        case 2 : 
            cout << "Pilihan anda telah disimpan, pilihan anda adalah 2. Soeharto ";
            break;
        case 3 : 
            cout << "Pilihan anda telah disimpan, pilihan anda adalah 3. B.J. Habibie ";
            break;
        case 4 : 
            cout << "Pilihan anda telah disimpan, pilihan anda adalah 4. Abdurrahman Wahid ";
            break;
        case 5 : 
            cout << "Pilihan anda telah disimpan, pilihan anda adalah 5. Megawati Soekarno Putri ";
            break;
        case 6 : 
            cout << "Pilihan anda telah disimpan, pilihan anda adalah 6. Susilo Bambang Yudhoyono ";
            break;
        case 7 : 
            cout << "Pilihan anda telah disimpan, pilihan anda adalah 7. Joko Widodo ";
            break;
        case 8 : 
            cout << "Pilihan anda telah disimpan, pilihan anda adalah 8. Prabowo Subianto ";
            break;
        default :
            cout << "Presiden Indonesia cuma ada 8 loh";
            break;
    } 
    cout << " " << endl;
    cout << "\nApakah Anda Ingin Mengganti Pilihan(Y/T) :"; cin >> g;
    if (g == 'y' || g == 'Y'){
        goto x;
    } else {
        cout << "---Selesai---";
    }
    
}