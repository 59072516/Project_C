//! 1、三元运算符
//表达式1?表达式2:表达式3
//若表达式1 为真，则执行表达式2，并赋值，若表达式1，表达式2均为假，则执行表达式3，并赋值
// #include <stdio.h>
// int main()
// {
//     int a = 10;
//     int b = 20;
//     int max = 0;

//     max = a > b ? a : b;
//     if (a > b)
//         max = a;
//     else
//         max = b;

//     return 0;
// }

//! 2、static 修饰局部变量 局部变量的生命周期变长
//!     static 修饰全局变量 改变了变量的作用域 - 让静态的全局变量只能在自己所在的源文件内部使用
//!     static 修饰函数     改变了函数的链接属性
// void test()
// {
//     static int a = 1;
//     a++;
//     printf("a=%d\n", a);
// }
// int main()
// {
//     int i = 0;
//     while (i < 5)
//     {
//         test();
//         i++;
//     }
//     return 0;
// }
//! 3、#define 定义常量和宏
// #include <stdio.h>
//?函数的定义
// int Max(int x, int y)
// {
//     if (x > y)
//         return x;
//     else
//         return y;
// }
//?宏的定义
// #define MAX(x,y) (x>y ? x:y)
// int main()
// {
//     int a=10;
//     int b=20;
//?函数的方式
// int max=Max(a,b);
// printf("max=%d\n",max);
//?宏的方式
//     max=MAX(a,b);
//     printf("max=%d\n",max);
//     return 0;
// }
// #define ADD(x, y) ((x) + (y))
// int main()
// {
//     int sum = ADD(2, 3);
//     printf("sum=%d\n", sum);
//     sum = 10 * ADD(2, 3);
//     printf("sum = %d\n", sum);
//     return 0;
// }
//! 4、指针
#include <stdio.h>
int main()
{
    int a = 10;  //? 32 bit = 4 byte
    int *p = &a; //?取a的地址
    // printf("%p\n", &a);
    // printf("%p\n", p);
    *p = 20; //? * - 解引用操作符
    printf("a=%d\n", a);
    return 0;
}