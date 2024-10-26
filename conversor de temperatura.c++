#include <iostream>
using namespace std;

void menu() {
    cout << "Qual você vai querer converter?" << endl;
    cout << "1- Celsius" << endl;
    cout << "2- Fahrenheit" << endl;
    cout << "3- Kelvin" << endl;
}

void conversor(int opcao, double temp) {
    int escolhas;
    switch (opcao) {
        case 1: {
            cout << "Você quer converter Celsius para?" << endl;
            cout << "1- Fahrenheit" << endl;
            cout << "2- Kelvin" << endl;
            cin >> escolhas;

            if (escolhas == 1) {
                double celsius;
                cout << "Quanto você quer converter: ";
                cin >> celsius;
                temp = (9.0 / 5.0 * celsius) + 32;  
                cout << "De Celsius para Fahrenheit será: " << temp << endl;

            } else if (escolhas == 2) {
                double celsius;
                cout << "Quanto você quer converter: ";
                cin >> celsius;
                temp = celsius + 273.15;
                cout << "De Celsius para Kelvin será: " << temp << endl;
            }
            break;
        }
        case 2: {
            double fahrenheit;
            cout << "Você quer converter Fahrenheit para?" << endl;
            cout << "1- Celsius" << endl;
            cout << "2- Kelvin" << endl;
            cin >> escolhas;

            if (escolhas == 1) {
                cout << "Quanto você quer converter: ";
                cin >> fahrenheit;
                temp = (fahrenheit - 32) / 1.8;
                cout << "Fahrenheit para Celsius será: " << temp << endl;

            } else if (escolhas == 2) {
                cout << "Quanto você quer converter: ";
                cin >> fahrenheit;
                temp = (fahrenheit - 32) * 5.0 / 9.0 + 273.15;
                cout << "De Fahrenheit para Kelvin fica: " << temp << endl;
            }
            break;
        }
        case 3: {
            double kelvin;
            cout << "Você quer converter Kelvin para?" << endl;
            cout << "1- Celsius" << endl;
            cout << "2- Fahrenheit" << endl;
            cin >> escolhas;

            if (escolhas == 1) {
                cout << "Quanto você quer converter: ";
                cin >> kelvin;
                temp = kelvin - 273.15;
                cout << "Kelvin para Celsius fica: " << temp << endl;

            } else if (escolhas == 2) {
                cout << "Quanto você quer converter: ";
                cin >> kelvin;
                temp = kelvin * 9.0 / 5.0 - 459.67;
                cout << "Kelvin para Fahrenheit fica: " << temp << endl;
            }
            break;
        }
        default:
            cout << "Opção inválida!" << endl;
            break;
    }
}

int main() {
    int escolha;
    double temp = 0.0;
    menu();
    cin >> escolha;

    conversor(escolha, temp);

    return 0;
}
