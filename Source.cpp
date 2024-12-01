#include <iostream>
using namespace std;

// ��������� �������
void task_if14(); // ������ 14: ��������� ���������� �� ���������� � ����� �����
void task_if24(); // ������ 24: ���������� ������� f(x)

int main() {
    int menu; // ����� ��� ������ ��������

    while (true) {
        // ��������� ����
        cout << "\n���� �������:" << endl;
        cout << "1 - �������� 14 (�������� � �������� �����)" << endl;
        cout << "2 - �������� 24 (���������� ������� f(x))" << endl;
        cout << "0 - �����" << endl;
        cout << "������ ����� ��������: ";
        cin >> menu;

        if (!cin || menu < 0 || menu > 2) {
            cout << "����������� ���! �������� ������." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        switch (menu) {
        case 1:
            task_if14(); // ��������� �������� 14
            break;
        case 2:
            task_if24(); // ��������� �������� 24
            break;
        case 0:
            cout << "����� � ��������. �� ���������!" << endl;
            return 0;
        default:
            cout << "����������� ����! ���� �����, ������ �� ���." << endl;
        }
    }
}

// �������� 14: ��������� ���������� �� ���������� � ����� �����
void task_if14() {
    float a, b, c;
    cout << "������ ��� �����: ";
    cin >> a >> b >> c;

    if (!cin) {
        cout << "������� �����! ������ ������ ��������." << endl;
        cin.clear();
        cin.ignore(1000, '\n');
        return;
    }

    float min = a, max = a;

    if (b < min) min = b;
    if (c < min) min = c;

    if (b > max) max = b;
    if (c > max) max = c;

    cout << "�������� �����: " << min << endl;
    cout << "�������� �����: " << max << endl;
}

// �������� 24: ���������� ������� f(x)
void task_if24() {
    float x, result;
    cout << "������ �������� x: ";
    cin >> x;

    if (!cin) {
        cout << "������� �����! ������ ������� ��������." << endl;
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

    cout << "�������� ������� f(x): " << result << endl;
}
