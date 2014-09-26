/*
 * sorting.hpp
 *
 *  Created on: 2014. 9. 26.
 *      Author: Joonyoung_Park
 */

#ifndef SORTING_HPP_
#define SORTING_HPP_

#include <iostream>

using namespace std;

// 9.1 You are given two sorted arrays, A and B, and A has a large enough buffer at the end to hold B Write a method to merge B into A in sorted order
void mergeSortedLists(int listA[], int lenA, int listB[], int lenB)
{
    int *curA = listA + lenA - 1;
    int *curB = listB + lenB - 1;
    int *curPos = curA + lenB;

    std::cout << "sorting.hpp - enclosing_method - curA: " << *curA << endl;
    std::cout << "sorting.hpp - enclosing_method - curB: " << *curB << endl;

    while (listA <= curA && listB <= curB)
    {
        if (*curA >= *curB)
        {
            *curPos-- = *curA--;
        }
        else
        {
            *curPos-- = *curB--;
        }
    }

    while (listA <= curA)
    {
        *curPos-- = *curA--;
    }

    while (listB <= curB)
    {
        *curPos-- = *curB--;
    }

    for (int i = 0; i < lenA + lenB; i++)
    {
        std::cout << "sorting.hpp - enclosing_method - curPos: " << *listA++ << endl;
    }
}

#endif /* SORTING_HPP_ */
