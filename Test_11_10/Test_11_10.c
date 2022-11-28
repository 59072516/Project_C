//!     1、指针
// #include <stdio.h>
// int main()
// {
//     int a = 10; //申请了4个字节的空间(int整型占了4个字节)
//                 // printf("%p\n",&a);
//     int *p = &a;
//     //? p是一个变量-指针变量
//     //? int 指向一个 int类型 的变量a
//                 // printf("%p\n", p);
//     *p = 20; // *--解引用操作符/间接访问操作符
//     printf("a = %d\n", a);
//     return 0;
// } 
//!     2、结构体
//?复杂对象 ---结构体 --- 自我创建的一种类型
//书名+作者+出版社+书号
//*类型、
#include<stdio.h>
struct Book
{
    char name[20]; //书名
    short price;  //价格
};
//*书
int main ()
{   
    //利用结构体类型-创建一个该类型的结构体变量
    struct Book b1 = {"C语言程序设计",55};//name,price
    struct Book *pb = &b1;
    printf("%s\n",pb->name);
    printf("%d\n",pb->price);
    //*  . --结构体变量.成员
    //* -> --结构体指针—>成员
    // printf("%s\n",(*pb).name);
    // printf("%d\n",(*pb).price);
    // printf("书名：%s\n",b1.name);
    // printf("价格：%d元\n",b1.price);
    return 0;
};