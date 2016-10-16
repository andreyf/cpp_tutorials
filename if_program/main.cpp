#include <iostream>

using namespace std;

int main() {

    bool pravda = true;
    int number1 = 1, number2 = 4;

    if(pravda) cout << "Правда" << endl;

    if(!pravda) {
        cout << "Это не будет отображаться" << endl;
    }
    else {
        cout << "А это будет ..." << endl;
    }

    if(number2 < number1) {
        cout << "Это не будет отображаться" << endl;
    }
    else if(pravda) {
        cout << "А это будет ..." << endl;
    }

    return 0;
}