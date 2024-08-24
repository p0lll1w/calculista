#include <iostream>
#include <limits>
using namespace std;

int main()
{
	char op;
	cout << "bem-vindo a calculista!" << endl;
	cout << "qual operacao voce deseja realizar?" << endl << endl;
	cout << "+ soma" << endl << "* multiplicacao" << endl;
	cout << "- subtracao" << endl << "/ divisao" << endl << endl;
	cin >> op;
	if (op == '+' || '-' || '*' || '/') {
		if (op == '+') {
			double x, y;
			while (true) {
				cout << endl << "digite seu primeiro numero:" << endl;
				if (cin >> x) {
					break;
				}
				else {
					cout << "voce ta burro? sao numeros, nao letras!" << endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

				}
			}
			while (true) {
				cout << "com qual numero voce quer somar ";
				cout << x;
				cout << "?" << endl;
				if (cin >> y) {
					break;
				}
				else {
					cout << "ta burro, so pode... sao numeros, nao letras!" << endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

				}
			}
			double z = x + y;
			cout << x;
			cout << " + ";
			cout << y;
			cout << " = ";
			cout << z << endl;
			cout << "obrigado por usar o calculista!" << endl;
		}
		if (op == '*') {
			double x, y;
			while (true) {
				cout << endl << "digite seu primeiro numero:" << endl;
				if (cin >> x) {
					break;
				}
				else {
					cout << "voce ta burro? sao numeros, nao letras!" << endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

				}
			}
			while (true) {
				cout << "por qual numero voce quer multiplicar ";
				cout << x;
				cout << "?" << endl;
				if (cin >> y) {
					break;
				}
				else {
					cout << "ta burro, so pode... sao numeros, nao letras!" << endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

				}
			}
			double z = x * y;
			cout << x;
			cout << " * ";
			cout << y;
			cout << " = ";
			cout << z << endl;
			cout << "obrigado por usar o calculista!";
		}
		if (op == '-') {
			double x, y;
			while (true) {
				cout << endl << "digite seu primeiro numero:" << endl;
				if (cin >> x) {
					break;
				}
				else {
					cout << "voce ta burro? sao numeros, nao letras!" << endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

				}
			}
			while (true) {
				cout << "por qual numero voce quer subtrair ";
				cout << x;
				cout << "?" << endl;
				if (cin >> y) {
					break;
				}
				else {
					cout << "ta burro, so pode... sao numeros, nao letras!" << endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

				}
			}
			double z = x - y;
			cout << x;
			cout << " - ";
			cout << y;
			cout << " = ";
			cout << z << endl;
			cout << "obrigado por usar o calculista!" << endl;
		}
		if (op == '/') {
			double x, y;
			while (true) {
				cout << endl << "digite seu primeiro numero:" << endl;
				if (cin >> x) {
					break;
				}
				else {
					cout << "voce ta burro? sao numeros, nao letras!" << endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

				}
			}
			while (true) {
				cout << "por qual numero voce quer dividir ";
				cout << x;
				cout << "?" << endl;
				if (cin >> y) {
					break;
				}
				else {
					cout << "ta burro, so pode... sao numeros, nao letras!" << endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

				}
			}
			double z = x / y;
			cout << x;
			cout << " / ";
			cout << y;
			cout << " = ";
			cout << z << endl;
			cout << "obrigado por usar o calculista!" << endl;
		}
	}
	if (op != '+' && op != '-' && op != '*' && op != '/') {
	cout << "insira uma operacao!" << endl;
	}
	return 0;
}