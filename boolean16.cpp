/*Дано ціле додатне число. Перевірити істинність висловлювання: «Дане число
є парним двозначним».*/

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int a;
    cout << "Введіть число, щоб перевірити, чи є дане число парним двозначним" << endl;
    cin >> a;
    
    bool res = (a % 2 == 0) && (a > 10 && a < 99);
    
    cout << boolalpha << res;

    return 0;
}
