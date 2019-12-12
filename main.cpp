#include<iostream>

int main(void){
    int daffodil, x, y, z;
    for ( daffodil = 0; daffodil < 999; ++daffodil)
    {
        x = daffodil / 100;    //分解百位数
        y = (daffodil - x * 100) / 10;    //分解十位数
        z = (daffodil % 10);    //分解个位数
        if (daffodil==x*x*x+y*y*y+z*z*z)
        {
            printf("%5d", daffodil);
        }
        
    }
    return 0;
}
