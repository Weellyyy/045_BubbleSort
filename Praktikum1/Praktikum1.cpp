#include <iostream>
using namespace std;
int a[20];
int n;

void input() {
    while (true) {
        cout << "Masukkan Banyak elemen Pada Array : ";
        cin >> n;
        if (n <= 20)
            break;

        else {
            cout << "\nArray hanya dapat menampung 20 elemen\n";
        }
        cout << endl;
        cout << "=================\n";
        cout << "Masukkan Elemen Array\n";
        cout << "================\n";

        for (int i = 0; i < n; i++) {
            cout << "Data ke-" << (i + 1) << ": ";
            cin >> arr[i];
        }

    }

}
