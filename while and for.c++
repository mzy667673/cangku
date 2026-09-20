#include <iostream>
using namespace std;

int main()
{
    // 使用 for 循环打印乘法表
    for (int a = 1; a <= 9; a++)
    {
        for (int b = 1; b <= a; b++)
        {
            cout << b << '*' << a << '=' << a * b << "\t";
        }
        cout << endl;
    }

    cout << endl;

    // 使用 while 循环打印乘法表
    int i = 1;
    while (i <= 9)
    {
        int j = 1;
        while (j <= i)
        {
            cout << j << "*" << i << "=" << i * j << "\t";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}