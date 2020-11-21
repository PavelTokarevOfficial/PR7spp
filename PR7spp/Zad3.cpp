#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");
    const int rows = 3, columns = 3;
    int summ = 0;
    int mass[rows][columns] = { {11,12,13},{21,22,23},{31,32,33} };
    //вывод
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << mass[i][j] << " ";           
        }
        cout << endl;
    }
    //подсчет суммы
    for (int i = 0; i <= 2; i++) 
    {
        summ = summ + mass[i][i];        
    }
    cout <<"Сумма: "<< summ;
}

