#include <iostream>

using namespace std;

int main() {
    cout << "Введите число A: ";
    int a = 0; // Объявление и инициализация переменной
    cin >> a; // Мы загружаем данные в переменную a
    cout << "Введите число B (кроме 0): ";
    int b = 0; // Объявление и инициализация переменной b
    cin >> b; // Мы загружаем данные в переменную Ь
    cout << "Результат сложения  " << a + b << endl; // Сложение
    cout << "Результат вычитания: " << a - b << endl; // Вычитание
    cout << "Результат деления: " << a / b << endl; // Деление
    cout << "Остаток от деления: " << a % b << endl; // Остаток от деления
    cout << "Результат умножения: " << a * b << endl; // Умножение
    cout << "Инкремент префиксный переменной a: " << ++a << endl; // Инкремент префиксный
    cout << "Инкремент суффиксный (постфиксный) переменной a: " << a++ << endl; // Инкремент суффиксный (постфиксный)
    cout << "Декремент префиксный переменной b: " << --b << endl; // Декремент префиксный
    cout << "Декремент суффиксный (постфиксный) переменной b: " << b-- << endl; // Декремент суффиксный (постфиксный)

    return 0;
}