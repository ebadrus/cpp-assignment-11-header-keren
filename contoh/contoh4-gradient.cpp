#include <iostream>

using namespace std;

string color(int r, int g, int b) {
    return "\033[38;2;" + to_string(r) + ";" + to_string(g) + ";" + to_string(b) + "m";
}

int main() {
    string text = "WARNA TEKS GRADIENT!!!";

    // gunakan panduan warna RGB >> ketik di google : RGB color picker
    int startR = 0,   startG = 150, startB = 255; // biru
    int endR   = 0,   endG   = 255, endB   = 100; // hijau

    int len = text.size();

    for (int i = 0; i < len; i++) {
        float t = (float)i / (len - 1);  // 0 → 1

        int r = startR + t * (endR - startR);
        int g = startG + t * (endG - startG);
        int b = startB + t * (endB - startB);

        cout << color(r, g, b) << text[i]; // jadi konsepnya ambil per huruf terus di warna satu2
    }

    cout << "\033[0m\n"; // resetnya
}
