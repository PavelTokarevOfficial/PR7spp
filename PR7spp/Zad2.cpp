
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");
    const int rows = 3, columns = 2;
    int srednum = 0, kolvonum = 0;
    int mass[rows][columns] = { {1,2},{3,4},{5,6} };
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << mass[i][j] << " ";
            if (mass[i][j] % 2 == 0) 
            {
                srednum = srednum + mass[i][j];
                kolvonum++;
            }
        }
        cout << endl;
    }
    cout << "Среднее: " << srednum / kolvonum;

}

