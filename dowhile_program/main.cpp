#include <iostream>

using namespace std;

int main() {
    int a = 0;

    do {
        cout << "Введите число (кроме 0) ";
        cin >> a;
    } while(a == 0);

    return 0;
}