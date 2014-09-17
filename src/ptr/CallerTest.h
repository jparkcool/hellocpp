#ifndef PTR_H_
#define PTR_H_

#include <iostream>
#include <string>

using namespace std;

void close(char* str)
{
    if (str)
    {
        cout << "str: " << str << endl;
    }
    else
    {
        cout << "str is NULL" << str << endl;
    }
}
#endif
