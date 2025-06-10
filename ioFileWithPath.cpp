#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string baris;
    string NamaFile;

    cout << "Masukkan nama file: ";
    cin >> NamaFile;

    // Membuka file dalam mode menulis
    ofstream outFile;
    // Menunj
    outFile.open(NamaFile + ".txt", ios::out);
    cout << ">= Menulis File, \'q' untuk keluar" << endl;

    while (true)
    {
        cout << "- ";
        getline(cin, baris);

        // Memeriksa apakah pengguna ingin keluar
        if (baris == "q")
        {
            break; // Keluar dari loop jika pengguna memasukkan 'q'
        }

        // Menulis baris ke file
        outFile << baris << endl;
    }
}