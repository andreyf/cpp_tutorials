#include <iostream>

using namespace std;

int main() {
    int perem1 = 4; // присваиваем perem1 4
    int perem2 = 6; // присваиваем perem2 6
    string text1 = "abc"; // присваиваем text1 "abc"
    string text2 = "abc"; // присваиваем text2 "abc"

    if(perem1 <= perem2) {
        cout << "Переменная 2 больше" << endl;
    }

    if(text1 == text2) {
        cout << "Текст 1 такой же, как текст 2" << endl;
    }

    return 0;
}