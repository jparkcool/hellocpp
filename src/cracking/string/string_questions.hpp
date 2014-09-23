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

#endif /* STRING_QUESTIONS_HPP_ */
