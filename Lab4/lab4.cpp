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

int DigitCount(int K);
void SortInc3(double &A, double &B, double &C);
int FindResult(int N);
bool CheckInput(int &a);
void PrintResult(int x);

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
    cout << "Введіть додатні числа, що є в діапазоні між 0 і 10000 (не включаючи)" << endl;
    cin>> A >> B >> C >> D >> E;
    
    
    if (cin.fail() || A <= 0 || B <= 0 || C <= 0 || D <= 0 || E <= 0 || A >= 10000 || B >= 10000 || C >= 10000 || D >= 10000 || E >= 10000)
    {
        cout << "Error! There are some mistakes with values" << endl;
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
    
    if (K < 10000)
    return 4;
}

void task_Proc12()
{
    cout << "***********Proc12*************" << endl;
    cout << "Сортувальник чисел за порядком зростання" << endl;
    double A1, B1, C1;
    double A2, B2, C2;
    
    cout << "Введіть перші три числа для сортування:" << endl;
    cin >> A1 >> B1 >> C1;
    cout << "Введіть наступні три числа для сортування:" << endl;
    cin >> A2 >> B2 >> C2;
    
    SortInc3(A1, B1, C1);
    SortInc3(A2, B2, C2);
    
    cout << "Пересортоване перше число виглядає так: " << A1 << " " << B1 << " " << C1 << endl;
    cout << "Пересортоване друге число виглядає так: " << A2 << " " << B2 << " " << C2 << endl;
}

void SortInc3(double &A, double &B, double &C)
{
    double firstNum;
    
    if (A > B)
    {
        firstNum = A;
        A = B;
        B = firstNum;
    }
    
        if (A > C)
    {
        firstNum = A;
        A = C;
        C = firstNum;
    }
    
        if (B > C)
    {
        firstNum = B;
        B = C;
        C = firstNum;
    }
}

void task_Integer23()
{
   
  int N;
  
  
  cout<<"***********Integer23*************" << endl;
  
  
  if (CheckInput(N))
  {
      int res = FindResult(N);
      PrintResult(res);
  }
  

}

bool CheckInput(int &a)
{
    cout << "Введіть кількість секунд, що минуло с початку доби:" << endl;
    cin >> a;
    
    if (cin.fail() || a < 0)
    {
        cout << "Error!" << endl;
        return false;
    }
    
    bool ok = (a >= 0 && a <= 100);
    if (!ok)
    {
        cout << "Error!" << endl;
        return false;
    }
    
    // якщо все окей, то бул чек резалт повертає тру
    return true;
}

int FindResult(int n)
{
    int min;
    min = (n % 3600) / 60;
    return min;
}

void PrintResult(int x)
{
    cout << "З початку останньої години минуло стільки хвилин: " << x << endl;
}
