/*
https://aticleworld.com/strcmp-in-c/
https://stackoverflow.com/questions/34873209/implementation-of-strcmp
*/

#include <stdio.h>

int strcmp(const char *s1, const char *s2)
{
    int result = 0;

    while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2)) {
        ++ s1;
        ++ s2;
    }
    
    //compare the mismatching character
//     result = (*s1 == *s2) ? 0 : ((*s1 > *s2) ? 1 : -1);
    result = *(const unsigned char*)s1 - *(const unsigned char*)s2;

    return result;
}

int main()
{
    const char *s1 = "Dog";
    const char *s2 = "Cat";

    int ret = strcmp(s1, s2);
    printf("ret = %d\n", ret);  // 1

    ret = strcmp(s2, s1);
    printf("ret = %d\n", ret);  // -1

    ret = strcmp(s1, s1);
    printf("ret = %d\n", ret);  // 0

    return 0;
}
