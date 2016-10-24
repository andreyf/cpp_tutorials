#include <iostream>

using namespace std;

int main() {

    cout << "Поставьте вашу оценку (по 5-бальной системе): ";
    int chislo;
    cin >> chislo;

    switch(chislo)
    {
        case 1:
            cout << "1 это слишком мало!";
            break;
        case 2:
            cout << "Это два!";
            break;
        case 3:
            cout << "Уже неплохо, но можно и лучше, чем три";
            break;
        default:
            cout << "Больше чем три! Поздравляем!";
            break;
    }

    return 0;
}