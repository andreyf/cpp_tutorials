#include <iostream>

using namespace std;

int main() {
    
    char tab[]="Napis";

    int i = 0;
    while(tab[i] != '\0') {
        cout << "tab[" << i << "]: " << tab[i] << endl;
        i++;
    }

    return 0;
}