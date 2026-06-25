#include <iostream>
#include <cmath>

int main()
{
    setlocale(0, "");
    double M = 0.434294482, a, b, eps;
    std::cout << "Введите значение a="; 
    std::cin >> a;
    std::cout << "Введите значение b=";
    std::cin >> b;
    std::cout << "Введите точность eps=";
    std::cin >> eps;
    if (a < 0) {
        std::cout << "Ошибка\n";
    } else {
        double x = b / (2 * a + b);
        int n = 3;
        double y = x;
        double sum = y;
        while (fabs(y) >= eps) {
            y = pow(x, n) / n;
            sum += y;
            n += 2;
        }
        double res = log10(a) + 2 * M * sum;
        std::cout << "Приближенное значение " << res << "\n";
        std::cout << "Точное значение " << log10(a + b);
    }
    return 0;
}
*ойоййоой*

