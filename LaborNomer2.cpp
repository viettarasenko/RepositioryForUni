/*Дано ціле додатне число. Перевірити істинність висловлювання: «Дане число
є парним двозначним».*/

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    cout << "Задача 16" << endl;
    int a;
    cout << "Введіть число, щоб перевірити, чи є дане число парним двозначним" << endl;
    cin >> a;
    
    bool res = (a % 2 == 0) && (a > 10 && a < 99);
    
    cout << boolalpha << res;

    return 0;

    cout << "Задача 20" << endl;

    double PI = 3.1416;
    double x;
    double angle = 127 * PI / 180;
    
    cout << " x (x != 0) ";
    cin >> x;
    
    double top = 2 * pow(3, x - 2) * sqrt( exp(2*x) * abs( sin(angle + 2*x) ) );
    double bottom = log(2 * abs(x / 2)) / log(3) ;

    double res;
    res = top / bottom;
    
    cout << res;

    return 0;
}
}



