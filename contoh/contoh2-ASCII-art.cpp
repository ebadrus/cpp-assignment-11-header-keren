#include <iostream>

using namespace std;

int main() {
    cout << "\033[36m"; //warna

    // buat disni : https://patorjk.com/
    // cek bagian text to ASCII art Generator
    
    // kamu taruh ASCII art di dalam R"( sini )"
    cout << R"(
       _                _      _         _____           _        _
      | |              | |    | |       |  __ \         | |      | |
      | | ___ _ __   __| | ___| | __ _  | |__) |   _ ___| |_ __ _| | ____ _
  _   | |/ _ \ '_ \ / _` |/ _ \ |/ _` | |  ___/ | | / __| __/ _` | |/ / _` |
 | |__| |  __/ | | | (_| |  __/ | (_| | | |   | |_| \__ \ || (_| |   < (_| |
  \____/ \___|_| |_|\__,_|\___|_|\__,_| |_|    \__,_|___/\__\__,_|_|\_\__,_|


               )";
    cout << "\033[0m\n\n"; //reset warna

    cout << "Selamat datang di Sistem Informasi Perpustakaan Jendela Pustaka\n\n";
    cout << "Username login: ";
    string username;
    cin >> username;
}
