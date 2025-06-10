#include <iostream>
using namespace std;

int main()
{
    try
    {
        cout << "Selamat Belajar di Prodi TI UMY" << endl; // penanda 1: awal program
        throw 0.5;                                         // melempar sebuah integer data
        cout << "Pengecualian tidak akan dieksekusi" << endl;
    }
    catch (int a)
    {
        // blok ini akan dieksekusi jika terjadi exception
        cout << "Pernyataan akan dieksekusi" << endl; // penanda 2: menangkap exception
    }
    catch (...)
    {
        /*jika selain integer maka bloc ini akan dieksekusi*/
        cout << "default Pengecualian dieksekusi" << endl;
    }
    return 0;
}