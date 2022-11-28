//!  1、字面变量
// #include <stdio.h>

// int main()
// {
//     int num1 = 0;
//     int num2 = 0;
//     int sum = 0;
//     scanf("%d%d", &num1, &num2);
//     sum = num1 + num2;

//     printf("sum = %d\n", sum);

//     return 0;
// }
//!    2、const 修饰的常变量
// int main()
// {
//     const int n = 10;
//     int arr[n] = [0];
//     n = 20;
//     return 0;
// }

//!    3、 #define 定义的标识符常量

// #include <stdio.h>

// #define MAX 10
// int main()
// {
//     int arr[MAX] = {0};
//     printf("%d\n", MAX);
//     return 0;
// }

//!    4、枚举常量
//枚举：一一列举
//!    枚举关键字- enum
//性别：男，女，保密
//三原色：红黄蓝
//星期：1234567
//#include <stdio.h>

// enum Sex
// {
//     male,
//     female,
//     secret
// };
// //? male female secret - 枚举常量
// int main()
// {
//     //enum Sex a = male;
//     printf("%d\n",male);
//     printf("%d\n",female);
//     printf("%d\n",secret);
//     return 0;
// }
// enum Color
// {
//     black = 0,
//     red,
//     green,
//     yellow,
// };
// int main()
// {
//     printf("%d\n", black);
//     printf("%d\n", red);
//     printf("%d\n", green);
//     printf("%d\n", yellow);
//     return 0;
// }
//!   5、字符串类型
// #include <stdio.h>
// int main()
// {
//     char arr1[] = "abc";
//?    "abc" ->'a','b','c','\0' ---'\0'是字符串的结束标志
//     char arr2[] = {'a','b','c','\0'};
//     printf("%s\n",arr1);
//     printf("%s\n",arr2);
//     return 0;
// }
//! 6、转义字符
/*  \n换行符
    \t水平制表符
    \?在书写连续多个问好时使用，防止他们被解析成三字母词
    \"用于表示一个字符串内部的双引号
    \'用于表示字符常量
    \\用于表示一个反斜杠，防止它被解释为一个转义序列夫
    \a警告字符，蜂鸣
    \b退格符
    \f进纸符
    \r回车
    \v垂直制表符
    \ddd表示1~3个八进制的数字，输出则转换成十进制对应的ASCII码
    \xdd表示2个十六进制数字，输出则转换成十进制对应的ASCII码
*/
//!  7、while循环
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     int line = 0;
//     printf("加入字节抖动\n");

//     while (line < 5000)
//     {
//         printf("敲一行代码：%d\n", line);
//         line++;
//     }
//     if (line >= 2000)
//         printf("offer\n");
//     return 0;
// }
//!  8、函数
// #include <stdio.h>

//  int Add(int x,int y)
// {
//     int z = x + y;
//     return z;
// }
// int main()
// {
//     int a = 100;
//     int b = 200;
//     int sum = 0;
//     sum = Add(a,b);
//     printf("sum = %d\n",sum);
//     return 0;
// }
//!   9、数组
// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     for (i = 0; i < 10; i++)
//     {
//         printf("%d", arr[i]);
//     }
//     return 0;
// }
//!   10、sizeof 计算的是变量/类型所占空间的大小，单位是字节（byte）

#include<stdio.h>

int main()
{   
    //计算数组元素个数---个数 = 数组总大小/每个元素的大小
    int a = 10;
    printf("%d\n",sizeof(a));
    return 0;
}
