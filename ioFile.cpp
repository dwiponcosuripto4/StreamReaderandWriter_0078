#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string baris;

    // Membuka file dalam mode menulis
    ofstream outfile;
    // Menunjuk ke sebuah nama file
    outfile.open("data.txt");

    cout << ">= Menulis File, \'q\' untuk keluar" << endl;

    // unlimited loop untuk menulis
    while (true)
    {
        cout << "- ";
        // mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
    }
}