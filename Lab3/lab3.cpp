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
//завдання на малюнку
void task_12();
//завдання на малюнку
void task_23();

int main()
{
    int menu;
    
    cout << "Enter task number ";
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
    double x;
    int r;
    
    cout<<"***********If38*************" << endl; 
    
    cout << "Enter integer number х" << endl;
    cin >> x;
    
        if (cin.fail())
        {
        cout << "Wrong integer!" << endl;
        return;
        }
    
    if (cin)
    { 
        cout << "After transformation:" << endl;
        
        if (x < -2)
        {
            r = x*x - 4;
            cout << r << endl;
        }
    
        if (x >= -2 && x <= 2)
        {
            r = x;
            cout << r << endl;
        }
    
        if (x > 2)
        {
            r = 4;
            cout << r << endl;
        }
    
    }
    
    main();

}

void task_12()
{
     cout<<"***********12*************" << endl;
     
     double r, x, y;
     
     //коммунікативний блок
     cout << "This program checks if your point belongs to yellow spots (12 variant) on picture" << endl;
     cout << "Enter the radius length of the circle:" << endl;
     cin >> r;
     cout << "Now please enter the x and y of the position you want confirm:" << endl;
     cin >> x >> y;
     
     
     if (cin.fail())
        {
        cout << "Wrong input!" << endl;
        return;
        }
        
    // Перевірка умови для першої чверті (всередині кола)
    // використовую рівняння центра кола
    bool in_yellow_circle = (x >= 0) && (x <= r) && (y <= r) && (y >= 0) && ((x-r)*(x-r) + (y-r)*(y-r) <= r*r);  

    // Перевірка умови для третьої чверті (поза колом, в межах ромба)
    // Тут радіус нижнього кола мають протилежну величину, тому замість просто r використовую -r
    bool in_yellow_rhomb = (x < 0) && (x <= -r) && (y <= -r) && (y <= 0) && ((x-(-r))*(x-(-r)) + (y-(-r))*(y-(-r)) <= r*r);

    // Загальний результат
    if (in_yellow_circle|| in_yellow_rhomb) {
        cout << "The point (" << x << ", " << y << ") belongs to yellow spot." << endl;
    } else {
        cout << "The point (" << x << ", " << y << ") doesnt belong to yellow spot." << endl;
    }
    
    main();
}

void task_23()
{
    double a, r, x, y;
    
    //коммунікативний блок
     cout << "***********23*************" << endl;
     cout << "This program checks if your point belongs to red spots on picture" << endl ;
     cout << "Enter the side length of the quadrat:" << endl;
     cin >> a;
     cout << "Enter the radius length of the circle:" << endl;
     cin >> r;
     cout << "Now please enter the x and y of the position you want confirm:" << endl;
     cin >> x >> y;
     
     if (cin.fail())
        {
        cout << "Wrong input!" << endl;
        return;
        }
        
    // Перевірка умови для першої чверті (всередині кола)
    // використовую рівняння кола
    bool in_red_circle = (x >= 0) && (y >= x) && (x * x + y * y <= r * r);  

    // Перевірка умови для третьої чверті (поза колом, в межах квадрата)
    bool in_red_quadrat = (x <= 0) && (y <= x) && (x >= -a / 2.0) && (y >= -a / 2.0) && (x * x + y * y >= r * r);

    // Загальний результат
    if (in_red_circle || in_red_quadrat) {
        cout << "The point (" << x << ", " << y << ") belongs to red spot." << endl;
    } else {
        cout << "The point (" << x << ", " << y << ") doesnt belong to red spot." << endl;
    }
    
    main();
}
