#include <iostream>

using namespace std;

int main() {
    int a = 0;

    while(0 == a) {
        cout << "Введите число (оно должно отличаться от 0) ";
        cin >> a;
    }

    return 0;
}