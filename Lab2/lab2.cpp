/*Дано ціле додатне число. Перевірити істинність висловлювання: «Дане число
є парним двозначним».*/

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    //boolean16
    
    cout << "Задача 16" << endl;
    int a;
    cout << "Введіть число, щоб перевірити, чи є дане число парним двозначним" << endl;
    cin >> a;
    
    bool res = (a % 2 == 0) && (a >= 10 && a <= 99);
    
    cout << boolalpha << res << endl;

    
    
    
    //20

    cout << "Задача 20" << endl;

    double PI = 3.1416;
    double x;
    double angle = 127 * PI / 180;
    
    cout << " x (x != 0) ";
    cin >> x;
    
    double top = 2 * pow(3, x - 2) * sqrt( exp(2*x) * abs( sin(angle + 2*x) ) );
    double bottom = log(2 * abs(x / 2)) / log(3) ;

    double result;
    res = top / bottom;
    
    cout << result << endl;
    
    
    
    //integer26

    /* Дні тижня пронумеровані наступним чином: 1 - понеділок, 2 -
    вівторок, ..., 6 - субота, 7 - неділя. Дано ціле число K, що лежить в
    діапазоні 1-365. Визначити номер дня тижня для K-го дня року, якщо
    відомо, що цього року 1 січня було вівторком.*/

    int K, N;
    N = 2;
    int resultat;
    cout << "Задача 26" << endl;
    cout << "Введіть день року" << endl;
    cin >> K;
    resultat = ( N - 1 + K - 1) % 7 + 1;
    
    cout << "Це " <<resultat << " день тижня" << endl;

    return 0;
}
}



