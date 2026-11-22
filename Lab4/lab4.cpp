//38 12 23

#include <iostream>
#include <cmath>

using namespace std;
/* Описати функцію DigitCount (K) цілого типу, яка знаходить кількість
цифр цілого додатного числа 0 <K <10000. Використовуючи цю
функцію, знайти кількість цифр для кожного з п'яти даних цілих
додатних чисел.*/
void task_Proc38();

/*Описати процедуру SortInc3 (A, B, C), яка міняє вміст змінних A, B, C
таким чином, щоб їх значення виявилися впорядкованими за зростанням
(A, B, C - дійсні параметри, які є одночасно вхідними та вихідними). За
допомогою цієї процедури впорядкувати по зростанню два даних набору
з трьох чисел: (A1, B1, C1) і (A2, B2, C2).*/
void task_Proc12();

/* З початку доби минуло N секунд (N - ціле). Знайти кількість повних
хвилин, що минули з початку останньої години. */
void task_Integer23();

int DigitCount(int K)

int main()
{
    int menu;
    
    cout << "Enter task number ";
    cin >> menu;
    
    switch (menu)
    {
        case(1): task_Proc38();
        break;
        
        case(2): task_Proc12();
        break;
        
        case(3): task_Integer23();
        break;
        
        default: cout << "Wrong number! There are only 1, 2 ,3" << endl;
    }
  return 0;
}

void task_Proc38()
{
    cout<<"***********Proc38*************" << endl; 
    int A, B, C, D, E;
    cout << "Введіть додатні числа, що є в діапазоні між 1 і 999" << endl;
    cin>> A >> B >> C >> D >> E;
    
    
    if (cin.fail() || A <= 0 || B <= 0 || C <= 0 || D <= 0 || E <= 0 || A >= 1000 || B >= 1000 || C >= 1000 || D >= 1000 || E >= 1000)
    {
        cout << "Error" << endl;
        return;
    }
    
    
    cout << "В першому числі така кількість символів: " << DigitCount(A) << endl;
    cout << "В другому числі така кількість символів: " << DigitCount(B) << endl;
    cout << "В третьому числі така кількість символів: " << DigitCount(C) << endl;
    cout << "В четвертому числі така кількість символів: " << DigitCount(D) << endl;
    cout << "В п'ятому числі така кількість символів: " << DigitCount(E) << endl;
}

int DigitCount(int K)
{
    if (K < 10)
    return 1;
    
    if (K < 100)
    return 2;
    
    if (K < 1000)
    return 3;
}
void task_Proc12()
{
    cout<<"***********Proc12*************" << endl; 
}

void task_Integer23()
{
   
  int N;
  double min;
  
  cout<<"***********Integer23*************" << endl;
  cout << "Введіть кількість секунд, що минуло с початку доби:" << endl;
  cin >> N;
  
  min = (N % 3600) / 60;
  
  cout << "З початку останньої години минуло стільки хвилин: " << min;

}

