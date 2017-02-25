#include <iostream>

using namespace std;

int main() {

    int tab[8][6]; //Мы создаем массив типа int размером 8х6

    for(int i = 0; i<8; i++)
        for(int j = 0; j<6; j++)
            cin >> tab[i][j];

    for(int i = 0; i<8; i++)
        for(int j = 0; j<6; j++)
            cout << "tab[" << i << "][" << j << "]: " << tab[i][j] << endl;

    return 0;
}