#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int x = 2, y = 1;

    if (x * y != 0 || y > x)
    {

        bool a = true, b = false;
        bool res = (x * y != 0) & (y > x);
        cout << "Result: " << boolalpha << res;
        return 0;


    }



    system("pause");
    return 0;
}
