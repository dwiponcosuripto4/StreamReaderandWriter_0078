#include <iostream>
#include <exception>
#include <array>
using namespace std;

int main()
{
    cout << "Awal Program" << endl; // penanda 1:...
    try
    {
        array<int, 3> data = {10, 20, 30};
        cout << data.at(5) << endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}