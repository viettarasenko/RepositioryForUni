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
     cout<<"***********9*************" << endl;
     
     //декларація
     double a, x, y;
     
     //коммунікативний блок
     cout << "This program checks if your point belongs to bright green spots (9 variant) on picture" << endl;
     cout << "Enter theside length of the square:" << endl;
     cin >> a;
     cout << "Now please enter the x and y of the position you want confirm:" << endl;
     cin >> x >> y;
     
     
    if (cin.fail() || a <= 0)
    {
        cout << "Wrong input!" << endl;
        return;
    }
    
    //підрахунок
    bool in_bright_green_circle = (y >= x - a/2) && (x*x + (y + a/2)*(y + a/2) <= a*a/4);        //a/2 - це радіус, тому a/2 * a/2 = a^2/4
    bool in_bright_green_quadrat = (y >= x - a/2) && (y <= 0) && (y >= -a/2) && (x <= a/2) && (x >= 0) && (x*x + (y + a/2)*(y + a/2) >= a*a/4);
    
    //виведення
    if (in_bright_green_circle || in_bright_green_quadrat) {
        cout << "The point (" << x << ", " << y << ") belongs to bright green spot." << endl;
    } else {
        cout << "The point (" << x << ", " << y << ") doesnt belong to bright green spot." << endl;
    }
}

void task_20()
{
    
}

void task_29()
{
    
}
