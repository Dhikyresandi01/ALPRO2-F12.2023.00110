#include <iostream>
using namespace std;


void caricetak(int arr[], int size, int x) {
    bool isFound = false;

    for (int i = 0; i < size; i++) {
        if (x == arr[i] && x % 2 == 0) {
            cout << "X ditemukan" << endl;
            isFound = true;
            break;
        }
    }

    if (!isFound) {
        cout << "X tidak ditemukan" << endl;
    }
}

int main() {
    int arr[] = {2, 2, 3, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x;


    cout << "Masukan X yang dicari: ";
    cin >> x;


    caricetak(arr, size, x);

    return 0;
}
