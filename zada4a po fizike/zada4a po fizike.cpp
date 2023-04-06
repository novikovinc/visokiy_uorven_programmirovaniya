//задача 2
#include <iostream>
#include <cmath>

using namespace std;

// Функция, определяющая правую часть дифференциального уравнения
double f(double x, double y, double k) {
    return k / x;
}

// Метод Рунге-Кутты четвёртого порядка
double runge_kutta(double x0, double y0, double h, double k) {
    double k1, k2, k3, k4;
    k1 = h * f(x0, y0, k);
    k2 = h * f(x0 + h / 2, y0 + k1 / 2, k);
    k3 = h * f(x0 + h / 2, y0 + k2 / 2, k);
    k4 = h * f(x0 + h, y0 + k3, k);
    return y0 + (k1 + 2*k2 + 2*k3 + k4) / 6;
}

int main() {
    double k = 2; // значение константы пропорциональности
    double x0 = 1, y0 = 2; // начальные условия: y(1) = 2
    double h = 0.01; // шаг интегрирования
    double x = 2; // точка, в которой ищется значение функции
    double y = y0;

    // Интегрируем дифференциальное уравнение до заданной точки
    while (x0 < x) {
        y = runge_kutta(x0, y, h, k);
        x0 += h;
    }

    // Выводим значение функции в заданной точке
    cout << "y(" << x << ") = " << y << endl;
    system("PAUSE");
    return 0;
}