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
