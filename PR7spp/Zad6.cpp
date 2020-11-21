#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");
    //создание,вывод массива
    const int rows = 3, columns = 3;
    int mass[rows][columns] = { {11,12,13},{21,22,23},{31,32,33} }, num = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << mass[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Введите число: ";
    cin >> num;
    //замена чисел
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (mass[i][j] < num) 
            {
                mass[i][j] = num;
            }
        }
    }
    //вывод массива
    cout << "Получившийся массив:"<<endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << mass[i][j] << " ";
        }
        cout << endl;
    }
}

