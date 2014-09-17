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

int main()
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
    return 0;
}
