/*
 * searching.hpp
 *
 *  Created on: 2014. 9. 16.
 *      Author: Joonyoung_Park
 */

#ifndef SEARCHING_HPP_
#define SEARCHING_HPP_

static int getFromMultiArray(int tab[2][4], int row, int col, int pos)
{
    int r = pos / col;
    int c = pos % col;
    return tab[r][c];
}

int binSearchOnMultiArray(int tab[2][4], int query, int start, int end)
{
    if (start > end)
        return -1;

    int mid = (start + end) / 2;
    int midVal = getFromMultiArray(tab, 2, 4, mid);
    if (midVal == query)
    {
        return mid;
    }
    else if (query < midVal)
    {
        return binSearchOnMultiArray(tab, query, start, mid - 1);
    }
    else
    {
        return binSearchOnMultiArray(tab, query, mid + 1, end);
    }
}

#endif /* SEARCHING_HPP_ */
