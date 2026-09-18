#include <iostream>
using namespace std;

int main()
{
    int N,K;
    
    cout << "Masukkan Jumlah Astronot: ";
    cin >> N;
    cout << "Masukkan Nilai K awal: ";
    cin >> K;
    
    int astronot[10000];
    for(int i=0; i<N; i++) {
        astronot[i] = i + 1;
    }

    int sisa = N;
    int posisi = 0;

    cout << "\nUrutan Astronot yang Tereliminasi: ";

    while(sisa > 1) {
        int idx = (posisi + K - 1) % sisa;
        int nomorGugur = astronot[idx];
        cout << nomorGugur;
        if (sisa > 2) {
            cout << ", ";
        }

        for(int i=idx; i<sisa-1; i++) {
            astronot[i] = astronot[i+1];
        }
        sisa = sisa - 1;

        if (nomorGugur % 2 == 0) {
            K = K + 2;
        } else {
            K = K - 1;
            if (K < 2) {
                K = 2;
            }
        }

        posisi = idx % sisa;
    }

    cout << "\nAstronot yang tersisa: " << astronot[0] << endl;

    return 0;
}   
