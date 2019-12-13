#include<iostream>
<<<<<<< HEAD

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
=======
#define SQUARES 64
int main(void){
    const double CROP = 2E16;
    double current, total;
    int counter = 1;
    printf("square      grains      total       ");
    printf("fraction of \n");
    printf("            added       grains      ");
    printf("world total\n");
    total = current = 1.0;
    printf("%4d %13.2e %12.2e %12.2e\n", counter, current, total, total / CROP);
    while (counter < SQUARES)
    {
        counter =counter+1;
        current = 2.0 * current;
        total = total + current;
        printf("%4d %13.2e %12.2e %12.2e\n", counter, current, total, total / CROP);       
    }
    printf("That`s all");
>>>>>>> b35e8b787d0188de134e3b34ee985ae3e874c9e9
    return 0;
}
