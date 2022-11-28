/*
    1、语句：分号隔开的就是一条语句
    2、语法结构：
    (1)单分支
        if(表达式)
            语句:
        if(表达式)
            语句1;
        else
            语句2;

    (2) 多分支
        if(表达式)
            语句1:
        else if(表达式2)
            语句2;
        else
            语句3;
    3、else与最近的if匹配，就近原则
    4、switch语句
        int
        switch(表达式)
        scanf();
            case 整型常量表达式;
                语句;
                break;
    5、while循环
        while(条件表达式)
            循环语句;


*/
#include <stdio.h>
/*
int main()
{
    int age = 100;
    if (age < 18)
        printf("未成年\n");
    else if (age >= 18 && age <= 30)
        printf("青年\n");
    else if (age >= 30 && age <= 50)
        printf("中年\n");
    else if (age >= 50 && age <= 90)
        printf("老年\n");
    else
        printf("长寿\n");
    return 0;
}

int main()
{
    int i = 1;
    while (i <= 100)
    {
        if (i % 2 == 1)
            printf("%d\n", i);
        i++;
    }
    return 0;
}

int main()
{
    int n = 1, m = 2;
    switch (n) // 1
    {
    case 1:
        m++; // 3
    case 2:
        n++; // 2
    case 3:
        switch (n) // 1
        {
        case 1:
            n++; // 2
        case 2:
            m++; // 4
            n++; // 3
            break;
        }
    case 4:
        m++; // 5
        break;
    default:
        break;
    }
    printf("m = %d,n = %d\n", m, n);
    return 0;
}
*/

int main()
{
    int ch = 0;
    //ctrl + z
    //EOF；end of file 表示 -1
    while (ch = getchar() != EOF)
    {
        putchar(ch);
    }
    
    // int ch = getchar();  获取字符
    // putchar(ch);         输出字符
    // printf("%c\n",ch);
    return 0;
}