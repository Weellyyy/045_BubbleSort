#include <iostream>
using namespace std;
int arr[20];
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
void bubbleSortArray() {
    int pass = 1;
    do {
        for (int j = 0; j <= n - 1 - pass; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        pass = pass + 1;

        cout << "\nPass " << pass - 2 << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << "";
        }
        cout << endl;
    } while (pass  <= n  - 1);
}

