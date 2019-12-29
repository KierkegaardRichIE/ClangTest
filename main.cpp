#include <iostream>
using namespace std;
int main(void)
{
    /*  int daffodil, x, y, z;
    for (daffodil = 0; daffodil < 999; ++daffodil)
    {
        x = daffodil / 100;            //分解百位数
        y = (daffodil - x * 100) / 10; //分解十位数
        z = (daffodil % 10);           //分解个位数
        if (daffodil == x * x * x + y * y * y + z * z * z)
        {
            printf("%7d", daffodil);
        }
    }
    std::cout << std::endl;
    short c = 7;
    std::cout << sizeof(c) << std::endl;
    (double)c;
    std::cout << sizeof(c) << std::endl;
    cout << "char:\t" << sizeof(char) << "\t字节" << endl;
    cout << "int:\t" << sizeof(int) << "\t字节" << endl;
    cout << "float:\t" << sizeof(float) << "\t字节" << endl;
    cout << "double:\t" << sizeof(double) << "\t字节" << endl;
*/
    char ch;
    cout << "Input a key and press Enter." << endl;
start:

    ch = getchar();
    if ('a' <= ch && ch <= 'z')
    {
        ch = ch - 32;
        putchar(ch);
        putchar('\n');
    }
    else if ('A' <= ch && ch <= 'Z')
    {
        ch = ch + 32;
        putchar(ch);
        putchar('\n');
    }
    goto start;
    return 0;
}