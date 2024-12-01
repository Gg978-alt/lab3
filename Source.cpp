#include <iostream>
using namespace std;

// Прототипи функцій
void task_if14(); // Варіант 14: Виведення найменшого та найбільшого з трьох чисел
void task_if24(); // Варіант 24: Обчислення функції f(x)

int main() {
    int menu; // Змінна для вибору завдання

    while (true) {
        // Виведення меню
        cout << "\nМеню завдань:" << endl;
        cout << "1 - Завдання 14 (найменше і найбільше число)" << endl;
        cout << "2 - Завдання 24 (обчислення функції f(x))" << endl;
        cout << "0 - Вихід" << endl;
        cout << "Введіть номер завдання: ";
        cin >> menu;

        if (!cin || menu < 0 || menu > 2) {
            cout << "Некоректний ввід! Повторіть спробу." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        switch (menu) {
        case 1:
            task_if14(); // Виконання завдання 14
            break;
        case 2:
            task_if24(); // Виконання завдання 24
            break;
        case 0:
            cout << "Вихід з програми. До побачення!" << endl;
            return 0;
        default:
            cout << "Некоректний вибір! Будь ласка, оберіть ще раз." << endl;
        }
    }
}

// Завдання 14: Виведення найменшого та найбільшого з трьох чисел
void task_if14() {
    float a, b, c;
    cout << "Введіть три числа: ";
    cin >> a >> b >> c;

    if (!cin) {
        cout << "Помилка вводу! Введіть числові значення." << endl;
        cin.clear();
        cin.ignore(1000, '\n');
        return;
    }

    float min = a, max = a;

    if (b < min) min = b;
    if (c < min) min = c;

    if (b > max) max = b;
    if (c > max) max = c;

    cout << "Найменше число: " << min << endl;
    cout << "Найбільше число: " << max << endl;
}

// Завдання 24: Обчислення функції f(x)
void task_if24() {
    float x, result;
    cout << "Введіть значення x: ";
    cin >> x;

    if (!cin) {
        cout << "Помилка вводу! Введіть числове значення." << endl;
        cin.clear();
        cin.ignore(1000, '\n');
        return;
    }

    if (x <= 0) {
        result = 0;
    }
    else if (x < 2) {
        result = 2 * x;
    }
    else {
        result = 4;
    }

    cout << "Значення функції f(x): " << result << endl;
}
