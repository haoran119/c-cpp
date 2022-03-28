/*
Reverse words in a given string - GeeksforGeeks
    https://www.geeksforgeeks.org/reverse-words-in-a-given-string/
Reverse string without using any temporary variable - GeeksforGeeks
    https://www.geeksforgeeks.org/reverse-string-without-using-any-temporary-variable/
*/

#include <iostream>

void ReverseWordsInString(char *myString)
{
    if (myString == nullptr) {
        return;
    }

    auto existsSpace{false};
    size_t start{0}, end{strlen(myString) - 1};
    // reverse the whole string
    while (start < end) {
        if (myString[start] == ' ') {
            existsSpace = true;
        }

        myString[start] ^= myString[end];
        myString[end] ^= myString[start];
        myString[start] ^= myString[end];

        ++ start;
        -- end;
    }

    if (!existsSpace) {
        return;
    }

    size_t i{0}, j{0};
    start = 0;
    end = 0;
    // reverse each word
    while (start < strlen(myString)) {
        while (end < strlen(myString) && myString[end] != ' ') {
            ++ end;
        }

        i = start;
        j = end - 1;
        while (i < j) {
            myString[i] ^= myString[j];
            myString[j] ^= myString[i];
            myString[i] ^= myString[j];

            ++ i;
            -- j;
        }

        ++ end;
        start = end;
    }
}

int main()
{
    char s[] = "I like this program very much";
    char s1[] = "helloworld";
    char s2[] = "hello world";

    ReverseWordsInString(s);
    ReverseWordsInString(s1);
    ReverseWordsInString(s2);

    std::cout << s << std::endl;    // much very program this like I
    std::cout << s1 << std::endl;   // dlrowolleh
    std::cout << s2 << std::endl;   // dlrow olleh

    return 0;
}
