#include <iostream>

using namespace std;

int main() {

    bool pravda = true, lozh = false;

    if(pravda && lozh) cout << "Правда && ложь" << endl;// строка не выводится
    if(pravda || lozh) cout << "Правда || ложь" << endl;
    if(!pravda) cout << "Отрицание (Правда)" << endl; // эта строка также не появится ...
    if(!lozh) cout << "Отрицание (ложь)" << endl; //... а эта появится

    return 0;
}