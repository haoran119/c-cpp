/*
Different ways to copy a string in C/C++ - GeeksforGeeks
    https://www.geeksforgeeks.org/different-ways-to-copy-a-string-in-c-c/
Why strcpy and strncpy are not safe to use? - GeeksforGeeks
    https://www.geeksforgeeks.org/why-strcpy-and-strncpy-are-not-safe-to-use/
Implement strncpy() function in C | Techie Delight
    https://www.techiedelight.com/implement-strncpy-function-c/#:~:text=Programming%20Puzzles-,Implement%20strncpy()%20function%20in%20C,char*%20source%2C%20size_t%20num)%3B
请别再用strcpy, 而用strncpy 或stpcpy, strlcpy (linux)_Fybon的博客-CSDN博客_strcpy替代
    https://blog.csdn.net/Fybon/article/details/53022622
How to return a Pointer from a Function in C - GeeksforGeeks
    https://www.geeksforgeeks.org/how-to-return-a-pointer-from-a-function-in-c/
Return pointer from functions in C
    https://www.tutorialspoint.com/cprogramming/c_return_pointer_from_functions.htm
*/

#include <stdio.h>
#include <stdlib.h>

// Bad
char* CopyStr(const char* someStr)
{
    char buf[100];
    sprintf(buf, "%s", someStr);
    return buf;
}

// Bad
char* CopyStr1(const char* someStr)
{
    if (someStr == NULL) {
        return NULL;
    }

    static char buf[100];
    sprintf(buf, "%s", someStr);
    return buf;
}

// Good
char* CopyStr2(char* destStr, const char* someStr, size_t n)
{
    if (destStr == NULL || someStr == NULL) {
        return NULL;
    }

    char* buf = destStr;

    while (n-- && ((*destStr++ = *someStr++) != '\0'));

    return buf;
}

int main()
{
    const char* s = "testtest";
    char *p = NULL, *p1 = NULL, *p2 = NULL;

    p = (char*)malloc(10);
    p = CopyStr(s); // warning: address of stack memory associated with local variable 'buf' returned [-Wreturn-stack-address]
    printf("%s\n", p);  // testtest

    p1 = (char*)malloc(10);
    p1 = CopyStr1(s);
    printf("%s\n", p1); // testtest

    p2 = (char*)malloc(10);
    p2 = CopyStr2(p2, s, 10);
    printf("%s\n", p2); // testtest

    free(p);
    free(p1);
    free(p2);
    p = NULL;
    p1 = NULL;
    p2 = NULL;

    return 0;
}
