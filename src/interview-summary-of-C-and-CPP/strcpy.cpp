#include <assert.h>

//    为了实现链式操作，将目的地址返回
char * strcpy(char *strDest, const char *strSrc)
{
    // 对原地址和目的地址加非0断言
    assert(strDest != NULL && strSrc != NULL);

    char *address = strDest;

    while ((*strDest++ = *strSrc++) != '\0');

    return address;
}

/*
strcpy,使用strcpy需注意什么，为什么，有什么更安全的函数

注意源字符串是是以‘\0'结束的，strcpy就是拷到源字符串中‘\0'才结束，可能使用strncpy来替换。
assert（编程术语）_百度百科（https://baike.baidu.com/item/assert/10931289?fr=aladdin#4）
*/
