#include <iostream>
using namespace std;

int panjangString(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

int nilaiHuruf(char c) {
    return (c - 'A') + 1;
}

char hurufDariNilai(int nilai) {
    return (char)('A' + (nilai - 1));
}

int main() {
    char pesan[1000];

    cout << "Masukkan pesan asli (huruf kapital, tanpa spasi): ";
    cin.getline(pesan, 1000);

    int n = panjangString(pesan);

    int* nilaiAsli = new int[n];
    for (int i = 0; i < n; i++) {
        nilaiAsli[i] = nilaiHuruf(pesan[i]);
    }

    char* hasil = new char[n + 1];
    hasil[0] = pesan[0]; 

    for (int i = 1; i < n; i++) {
        int total = nilaiAsli[i] + nilaiAsli[i - 1];
        if (total > 26) {
            total = total - 26;
        }
        hasil[i] = hurufDariNilai(total);
    }
    hasil[n] = '\0';

    cout << "Pesan tersandi: ";
    for (int i = 0; i < n; i++) {
        cout << hasil[i];
    }
    cout << endl;

    delete[] nilaiAsli;
    delete[] hasil;
    return 0;
}
