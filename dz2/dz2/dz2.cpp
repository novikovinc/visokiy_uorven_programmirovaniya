#include <stdlib.h>
#include <iostream>
using namespace std;
int main() {
	int a, b;
	int sum;
	cout << "Введите 1-ое слагаемое: ";
	cin >> a;
	cout << "Введите 2-ое слагаемое: ";
	cin >> b;
	sum = a + b;
	cout << "Сумма: " << sum << endl;
	system("PAUSE");
	return 0;
}