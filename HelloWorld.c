#include <stdio.h>

int main() //主函数-程序的入口，main函数有且仅有一个
// main函数前面的数据类型表示main函数调用返回一个数据类型值
{
    printf("hello world!\n");

    char name = 'T';
    printf("%c\n", name);

    int age = 20;
    printf("%d\n",age);
    //!         %c--打印字符型数据
    //!         %d -- 打印整型十进制数据
    //!         %f -- 打印浮点类型数据
    //!         %p -- 以地址的形式打印
    //!         %x -- 打印十六进制数值

    printf("%d\n",sizeof(char));         //1
    printf("%d\n",sizeof(short));        //2
    printf("%d\n",sizeof(int));          //4
    printf("%d\n",sizeof(long));         //4
    printf("%d\n",sizeof(long long));    //8
    printf("%d\n",sizeof(float));        //4
    printf("%d\n",sizeof(double));       //8
                                        //字节数
    return 0; //返回 0
    //!
    //?
    //*
    //todo
}