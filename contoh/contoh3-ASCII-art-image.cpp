#include <iostream>

using namespace std;

int main() {
    cout << "\033[36m"; //warna

    // eksplor / buat disini : https://www.asciiart.eu/
    // perhatikan komposisi gambar, jumlah karakternya, jangan sampai penuh sama gambar

    // kamu taruh ASCII art di dalam R"( sini )"
    cout << R"(
        Art by Donovan Bake

              __...--~~~~~-._   _.-~~~~~--...__
            //               `V'               \\
           //                 |                 \\
          //__...--~~~~~~-._  |  _.-~~~~~~--...__\\
         //__.....----~~~~._\ | /_.~~~~----.....__\\
        ====================\\|//====================
                        dwb `---`

               )";
    cout << "\033[0m\n\n"; //reset warna

    cout << "Selamat datang di Sistem Informasi Perpustakaan Jendela Pustaka\n\n";
    cout << "Username login: ";
    string username;
    cin >> username;
}
