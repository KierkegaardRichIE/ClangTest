#include <iostream>
using namespace std;
int main(void)
{
    /*  int daffodil, x, y, z;
    for (daffodil = 0; daffodil < 999; ++daffodil)
    {
        x = daffodil / 100;            //�ֽ��λ��
        y = (daffodil - x * 100) / 10; //�ֽ�ʮλ��
        z = (daffodil % 10);           //�ֽ��λ��
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
    cout << "char:\t" << sizeof(char) << "\t�ֽ�" << endl;
    cout << "int:\t" << sizeof(int) << "\t�ֽ�" << endl;
    cout << "float:\t" << sizeof(float) << "\t�ֽ�" << endl;
    cout << "double:\t" << sizeof(double) << "\t�ֽ�" << endl;
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