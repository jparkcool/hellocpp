/*
 * string_questions.hpp
 *
 *  Created on: 2014. 9. 18.
 *      Author: Joonyoung_Park
 */

#ifndef STRING_QUESTIONS_HPP_
#define STRING_QUESTIONS_HPP_

#include <map>

using namespace std;

namespace str
{
namespace conversion
{
char* intToStr(int i)
{
    // -1234 -> "4321 with - sign" -> reverse -> "-1234"

    // find out the length
    bool isNega = (i < 0);
    int abs = (isNega ? i * -1 : i);
    int len = (abs == 0 ? 1 : 0);
    int tmp = abs;
    while (tmp)
    {
        tmp /= 10;
        len++;
    }
    if (isNega)
        len++;

    std::cout << "string_questions.hpp - intToStr - len: " << len << endl;

    // copy digit in reverse order
    char* str = NULL;
    char buf[100] =
    { 0 };
    str = (false ? buf : (char *) calloc(len++, sizeof(char)));

    char* strStart = str;
    tmp = abs;
    int remainder;
    while (tmp)
    {
        remainder = tmp % 10;
        *str = ('0' + remainder);
        tmp /= 10;
        str++;
    }

    if (isNega)
    {
        *str++ = '-';
    }

    strStart = strrev(strStart);

    std::cout << "string_questions.hpp - intToStr - len: " << len << endl;
    std::cout << "string_questions.hpp - intToStr - strStart: " << strStart << endl;

    return strStart;
}
}  // namespace conversion
}  // namespace str

//"-1234" to -1234
int StrToInt(const char* str)
{
    if (!str)
        return -1; // or define ERR_NO and return it

//    if (!isNum(str)) {
//        // check NULL, non-number and so on
//        return ERR_NO;
//    }

    bool isNeg = (*str == '-');
    if (isNeg)
    {
        str++;
    }

    int ret = 0;
    while (*str)
    {
        ret = ret * 10 + (*str - '0');
        str++;
    }

    return (isNeg ? ret * -1 : ret);
}

/* "tetris" returns 'e' */
char FirstNonRepetitiveChar(const char* string)
{
    std::map<char, bool> countMap;
    const char* tmp = string;
    while (*tmp)
    {
        if (countMap[*tmp])
        {
            countMap[*tmp] = false;
        }
        else
        {
            countMap[*tmp] = true;
        }
        tmp++;
    }

    tmp = string;
    while (*tmp)
    {
        if (countMap[*tmp])
        {
            return *tmp;
        }
        tmp++;
    }

    return '\0';
}

//"Battle of the Vowels: Hawaii vs. Grozny" and a remove of "aeiou" -> ¡°Bttl f th Vwls: Hw vs. Grzny¡±
char* RemoveCharsInChar(char* str, const char* remove)
{
    if (!remove)
        return str;

    std::map<char, int> rmMap;
    while (*remove)
    {
        if (rmMap.find(*remove) == rmMap.end())
        {
            rmMap[*remove] = 1;
            printf("RemoveCharsInChar: %c, %d\n", *remove, rmMap[*remove]);
        }
        remove++;
    }

    // rm - log(N), log(1) - log(1) - array, hash table - hash table
    // (str, rm -> new str), (str, rm -> str) - (str, rm -> str)

    char* endOfStr = str;
    char* current = str;
    while (*current)
    {
        if (rmMap.find(*current) == rmMap.end())
        {
            *endOfStr = *current;
            endOfStr++;
        }
        current++;
    }

    if (endOfStr != str)
    {
        *endOfStr = '\0';
    }

    return str;
}

/*
 Write a program to reverse a string without using strrev function in c?
 Write a program to reverse a string without using strrev function in c?
 Write a program to reverse a string without using strrev function in c?
 Write a program to reverse a string without using strrev function in c?

 Write a program to reverse a string without using strrev function in c?
 Write a program to reverse a string without using strrev function in c?
 Write a program to reverse a string without using strrev function in c?
 Write a program to reverse a string without using strrev function in c?Write a program to reverse a string without using strrev function in c?
 Write a program to reverse a string without using strrev function in c?
 Write a program to reverse a string without using strrev function in c?
 Write a program to reverse a string without using strrev function in c?Write a program to reverse a string without using strrev function in c?
 Write a program to reverse a string without using strrev function in c?
 Write a program to reverse a string without using strrev function in c?
 Write a program to reverse a string without using strrev function in c?Write a program to reverse a string without using strrev function in c?
 Write a program to reverse a string without using strrev function in c?
 Write a program to reverse a string without using strrev function in c?
 Write a program to reverse a string without using strrev function in c?Write a program to reverse a string without using strrev function in c?
 Write a program to reverse a string without using strrev function in c?
 Write a program to reverse a string without using strrev function in c?
 Write a program to reverse a string without using strrev function in c?Write a program to reverse a string without using strrev function in c?
 Write a program to reverse a string without using strrev function in c?
 Write a program to reverse a string without using strrev function in c?
 Write a program to reverse a string without using strrev function in c?Write a program to reverse a string without using strrev function in c?
 Write a program to reverse a string without using strrev function in c?
 Write a program to reverse a string without using strrev function in c?
 Write a program to reverse a string without using strrev function in c?
 */

#endif /* STRING_QUESTIONS_HPP_ */
