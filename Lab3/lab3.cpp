//38 12 23


#include <iostream>
#include <cmath>

using namespace std;

/*Для заданого дійсного x знайти значення наступної функції r, що приймає
значення цілого типу:

r(x) = {
        x^2 − 4, якщо x < −2;
        x, якщо − 2 ≤ x ≤ 2;
        4, якщо x > 2.*/
void task_If38();

void task_12();

void task_23();

int main()
{
    int menu;
    
    cout << "Task number ";
    cin >> menu;
    
    // перемикання між завданнями
    switch (menu)
    {
        case 1: task_If38();
        break; //завдання 1
        
        case 2: task_12();
        break; //завдання 2
        
        case 3: task_23();
        break; //завдання 3
        
        //повідомлення про помилку
        default: cout<<"Wrong task! There are only 1, 2, 3" << endl; 
    }
    
    return 0;
}

void task_If38()
{
    cout<<"***********If38*************" << endl; 
}

void task_12()
{
     cout<<"***********12*************" << endl; 
}

void task_23()
{
     cout<<"***********23*************" << endl; 
}
