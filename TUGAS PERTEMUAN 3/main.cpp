#include <iostream>
using namespace std;

// Fungsi untuk mencari nilai minimum antara x dan y
int cariMin(int x, int y) {
    if (x < y)
        return x;
    else
        return y;
}

int main() {
    int x, y;

    // Input nilai x dan y
    cout << "Masukkan nilai x: ";
    cin >> x;
    cout << "Masukkan nilai y: ";
    cin >> y;

    // Memanggil fungsi cariMin
    int nilaiMin = cariMin(x, y);

    // Menampilkan hasil
    cout << "Nilai terkecil antara " << x << " dan " << y << " adalah: " << nilaiMin << endl;

    return 0;
}
