#include <iostream>
using namespace std;

main(){
    // Tipe data yang dipakai
    string nama, nim, matkul, dosen, kom;
    char grade, ulang;
    float nt, nq, nu, nua, nilai;

    X :
    system("cls");
    // MEnginput seluruh data mahasiswa
    cout << "Silahkan Masukan Data Diri Anda Dengan Benar !!!\n" ;
    cout << " " << endl;
    cout << " " << endl;
    cout << "Masukan Nama : "; getline(cin, nama);
    cout << "Masukan NIM : "; getline(cin, nim);
    cout << "Masukan Kom : "; getline(cin, kom);
    cout << "Masukan Nama Dosen PA : "; getline(cin, dosen);
    cout << "Masukan Mata Kuliah :"; getline(cin, matkul);
    cout << "Masukan Nilai Tugas : "; cin >>nt;
    cout << "Masukan Nilai Quis : "; cin >>nq;
    cout << "Masukan Nilai UTS : "; cin >>nu;
    cout << "Masukan Nilai UAS : "; cin >>nua;

    // Melakukan Perhitungan Nilai 
    nilai = nu*0.35 + nua*0.35 + nt*0.2 + nq*0.1;

    // Melakukan konversi ke dalam Huruf
    if (nilai >= 90 && nilai <= 100){
        grade = 'A';
    } else if (nilai >= 70 && nilai < 90){
        grade = 'B';
    } else if (nilai >= 50 && nilai < 70){
        grade = 'C';
    } else if (nilai >= 30 && nilai < 50){
        grade = 'D';
    } else {
        grade = 'E';
    }
    
    // Menampilkan seluruh data yang sudah di input
    system ("cls");
    cout << "Nama : " << nama << endl;
    cout << "NIM : " << nim << endl;
    cout << "KOM : " << kom << endl;
    cout << "Nama Dosen PA : " << dosen << endl;
    cout << "Mata Kuliah : " << matkul << endl;
    cout << "Nilai : " << grade << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    // Menanyakan apakah ingin memasukan data yang lain
    cout << "Apakah Ingin Memasukan Data Lain (Y/T)?"; cin >> ulang; cin.ignore();//cin ignore digunakan untuk Membersihkan karakter newline yang tersisa di input buffer
    // Jika user menginput Y maka Program Akan Mengulang Keatas
    if (ulang == 'y' || ulang == 'Y'){
        goto X;
    } else {
        cout << " " << endl;
        cout << " " << endl;
        cout << "Terimakasih Sudah Mengisi KHS";
    } //Jika User meng input selain Y maka program akan berhenti
}