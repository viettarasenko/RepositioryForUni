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
     cout << "Enter the side length of the square:" << endl;
     cin >> a;
     cout << "Now please enter the x and y of the position you want confirm:" << endl;
     cin >> x >> y;
     
    //перевірка умови
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
    cout<<"***********20*************" << endl;
    
    //декларація
    int n;
    double x, k;
    double S = 0;

    //комунікативний блок
    cout << "Enter x" << endl;
    cin >> x;
    
    //перевірка умови
    if (fabs(-1 + cos(x)) >= 1)                                                                 //fabs is good for floatig numbers instead of abs
    {
        cout << "The condition is not satisfied!" << endl;
        return;
    }
    
    //комунікативний блок
    cout << "Enter n (the number of terms to be calculated)" << endl;
    cin >> n;
    
    if (cin.fail() || n <= 0)
    {
        cout << "Wrong input!" << endl;
        return;
    }
    
    
    
    //підрахунок
    for (int k = 1; k <= n; k++) //why <=
    {
        double above_part = pow(-1, k) * pow(-1 + cos(x), k);
        double down_part = k;
        S -= above_part/down_part;
    }
    
    //виведення
    cout << "Machine is thinking. Probably it will have big thoughts." << endl;
    cout << "Here is your sume: " << S << endl;

}

void task_29()
{
    
}
