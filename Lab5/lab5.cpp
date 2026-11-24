//9 20 29
#include <iostream>
#include <cmath>

using namespace std;

void task_9();
//завдання на малюнку
void task_20();
//завдання на малюнку
void task_29();

int main()
{
    int menu;
    
    cout << "Enter task number ";
    cin >> menu;
    
    // перемикання між завданнями
    switch (menu)
    {
        case 1: task_9();
        break; //завдання 1
        
        case 2: task_20();
        break; //завдання 2
        
        case 3: task_29();
        break; //завдання 3
        
        //повідомлення про помилку
        default: cout<<"Wrong task! There are only 1, 2, 3" << endl; 
    }
    
    return 0;
}
