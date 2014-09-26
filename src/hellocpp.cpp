//============================================================================
// Name        : hellocpp.cpp
// Author      : Jay
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <sstream>      // std::stringstream, std::stringbuf

#include "std/VectorT.h"
#include <algorithm>
#include <cctype>
#include <string.h>

#include "ptr/CallerTest.h"
#include "cracking/searching/searching.hpp"
#include "cracking/string/string_questions.hpp"
#include "cracking/recursion/recursion.hpp"
#include "cracking/sorting/sorting.hpp"

using namespace std;
using namespace std_test;

string test()
{
    //    VectorT vt;
    string primaryDisplayName;
    long primaryContactID;
    stringstream out;
    //    out << "[ContactMatch] name=";
    //    if (!primaryDisplayName.empty())
    //    {
    //        out << primaryDisplayName;
    //    }
    //    out << ", contactID=" << primaryContactID;
    out << "[ContactMatch] name=" << primaryDisplayName << ", contactID=" << primaryContactID;
    string xxx = out.str();

    return xxx;
}

typedef struct XXX
{
    char *str;
} XXX;

void test_(char** buf)
{
    if (buf == NULL || *buf == NULL)
        return;

    size_t len = strlen(*buf);
    if (len)
    {
        char lastChar = *(*buf + len - 1);

        printf("buf: %s\n", *buf);
        printf("lastChar: %c\n", lastChar);

        if (lastChar == ';')
        {
            printf("EQEQEQEQEQEQEQEQEQEQ: %c\n", lastChar);
        }
    }
}

void testBinMul()
{
    //    char *str = (char *) calloc(10, sizeof(char));
    //    char *nil = NULL;
    //    strcpy(str, "alskdjflksdf;");
    //    test_(&nil);
    int tab[2][4] =
    {
    { 1, 2, 4, 7 },
    { 10, 11, 13, 16 } };
    int i = binSearchOnMultiArray(tab, 1, 0, 7);
    printf("\ndone: %d", i);
}

void test_RemoveCharsInChar()
{
    char* str2 = (char*) (calloc(100, sizeof(char)));
    strcpy(str2, "Battle of the Vowels: Hawaii vs. Grozny");
    RemoveCharsInChar(str2, "aeiou");
    printf("\n RemoveCharsInChar: %s", str2);
}

void test_FirstNonRepetitiveChar()
{
    //    char *str = (char *) calloc(10, sizeof(char));
    //    char *nil = NULL;
    //    strcpy(str, "alskdjflksdf;");
    //    test_(&nil);
    const char* str = "tetris";
    char fchar = FirstNonRepetitiveChar(str);
    printf("\n test_FirstNonRepetitiveChar: %c", fchar);
}

void test_intToStr()
{
    char* intToStr = str::conversion::intToStr(-1234);
    std::cout << "hellocpp.cpp - test_intToStr: " << intToStr << endl;

    int strToInt = StrToInt("-1234");
    std::cout << "hellocpp.cpp - strToInt: " << strToInt << endl;
}

int main()
{
//    test_FirstNonRepetitiveChar();
//    test_RemoveCharsInChar();
//    test_intToStr();
//    fiboRecur(10);

    int listA[100] =
    { 1, 3, 5 };

    int listB[3] =
    { 2, 4, 6 };

    mergeSortedLists(listA, 3, listB, 3);

    std::cout << "hellocpp.cpp - main - end" << endl;

    return 0;
}
