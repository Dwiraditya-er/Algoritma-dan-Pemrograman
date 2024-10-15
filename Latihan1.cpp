#include <iostream>

using namespace std;

int main()
{
int a,b;
    cout << "enter two number: " ;
    cin >> a;
    cin >> b;

    if (a > b)
        cout << "a is greater than b" << endl;
    else
        cout << "b is greater than a" << endl;

    return 0;
}
//Kesalahan pada baris ke-15 terletak pada tidak adanya *statement terminator* (penanda akhir pernyataan)
//yaitu *titik koma (semicolon)*. Setiap pernyataan dalam C++ harus diakhiri dengan semicolon
//sebagai tanda bahwa perintah telah selesai. Pada kode sebelumnya, baris ini tidak memiliki semicolon setelah endl
//sehingga akan menyebabkan error saat kompilasi. Penulisan yang benar harus menambahkan semicolon agar sesuai dengan sintaks C++ yang tepat.
