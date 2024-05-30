#include <iostream>
using namespace std;

void minimal(int* arr, int len) {
    int min = *arr;
    for (int i = 0; i < len; i++) {
        if (min > *(arr + i))
            min = *(arr + i);
    }
    cout << "Minimal: " << min << endl;
}

int main() {
    setlocale(LC_ALL, "RU");
    int arr[] = { 18, 3, 7, 4, 9 };
    minimal(arr, 5);
    return 0;
}