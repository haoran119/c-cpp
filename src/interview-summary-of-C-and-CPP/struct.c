//
//  main.c
//  LeetCode
//
//  Created by Hao on 2017/11/22.
//  Copyright © 2017年 Hao. All rights reserved.
//

#include <stdio.h>

// Calculate the number of elements in x
#define myMacro(x) sizeof((x)) / sizeof((x[0]))

// Definition and initialization of array of struct
struct structTest {
    int   digit;
    char *number;
} strTest[] = { {1, "one"},     {2, "two"},
                {3, "three"},   {4, "four"},
                {5, "five"},    {6, "six"},
                {7, "seven"},   {8, "eight"},
                {9, "nine"},    {10, "ten"} };

int getNumber1(char *number)
{
    int i;

    printf("Before for-loop : i = %d\n\n", i);

    for (i = myMacro(strTest); i --;) // i -- will be executed at the BEGINNING of the first loop
    {
        printf("Loop i = %d\n", i);
        printf("[%d : %s]\n", strTest[i].digit, strTest[i].number);
        if (strcmp(strTest[i].number, number)) // return value 0 only if the contents of both strings are equal
        {
            printf("Before continue : %d\n", i);
            continue;
        }
        printf("Before break : %d\n", i);
        break;
    }

    printf("\nAfter for-loop : %d\n\n", i);
    return i;
}

int getNumber2(char *number)
{
    int i;

    printf("Before for-loop : i = %d\n\n", i);

    for (i = myMacro(strTest); ; i --) // i -- will be executed at the END of the first loop
    {
        printf("Loop i = %d\n", i);
        printf("[%d : %s]\n", strTest[i].digit, strTest[i].number);
        if (strcmp(strTest[i].number, number))
        {
            printf("Before continue : %d\n", i);
            continue;
        }
        printf("Before break : %d\n", i);
        break;
    }

    printf("\nAfter for-loop : %d\n\n", i);
    return i;
}

int main()
{
    printf("myMacro(strTest) = %d\n\n", myMacro(strTest));

    printf("getNumber1(\"zero\") = %d\n\n", getNumber1("zero"));

    printf("getNumber1(\"nine\") = %d\n\n", getNumber1("nine"));

    printf("getNumber2(\"zero\") = %d\n\n", getNumber2("zero"));

    printf("getNumber2(\"nine\") = %d\n\n", getNumber2("nine"));

    return 0;
}

/*
struct数组定义和初始化，以及for循环第一次循环会执行哪些语句，比较tricky，注意i--语句执行先后顺序。

执行结果可以看到getNumber1的第一次循环开始时已经执行i--，而getNumber2并没有，原因就在于i--位于不同位置。

myMacro(strTest) = 10

Before for-loop : i = 0

Loop i = 9
[10 : ten]
Before continue : 9
Loop i = 8
[9 : nine]
Before continue : 8
Loop i = 7
[8 : eight]
Before continue : 7
Loop i = 6
[7 : seven]
Before continue : 6
Loop i = 5
[6 : six]
Before continue : 5
Loop i = 4
[5 : five]
Before continue : 4
Loop i = 3
[4 : four]
Before continue : 3
Loop i = 2
[3 : three]
Before continue : 2
Loop i = 1
[2 : two]
Before continue : 1
Loop i = 0
[1 : one]
Before continue : 0

After for-loop : -1

getNumber1("zero") = -1

Before for-loop : i = 0

Loop i = 9
[10 : ten]
Before continue : 9
Loop i = 8
[9 : nine]
Before break : 8

After for-loop : 8

getNumber1("nine") = 8

Before for-loop : i = 0

Loop i = 10
[0 : (null)]
(lldb)

*/
