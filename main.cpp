#include <iostream>
using namespace std;

void drawTriangle(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < n - i; ++j) {
            cout << "+";
        }
        for (int j = 0; j < 2 * i - 1; ++j) {
            cout << "*";
        }
        for (int j = 0; j < n - i; ++j) {
            cout << "+";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Введите высоту треугольника: ";
    cin >> n;
    drawTriangle(n);
    return 0;
}
