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

void task_9()
{
     cout<<"***********12*************" << endl;
     
     double r, x, y;
     
     //коммунікативний блок
     cout << "This program checks if your point belongs to bright green spots (12 variant) on picture" << endl;
     cout << "Enter the radius length of the circle:" << endl;
     cin >> r;
     cout << "Now please enter the x and y of the position you want confirm:" << endl;
     cin >> x >> y;
     
     
     if (cin.fail())
        {
        cout << "Wrong input!" << endl;
        return;
        }
