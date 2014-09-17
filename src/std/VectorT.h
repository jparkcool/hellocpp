/*
 * VectorT.h
 *
 *  Created on: 2014. 8. 23.
 *      Author: Joonyoung_Park
 */

#ifndef VECTORT_H_
#define VECTORT_H_

#include <iostream>
#include <string>
#include <vector>

using namespace std;

namespace std_test
{

class Tmp
{
public:
    int iii;
};

class VectorT
{
public:
    VectorT();
    virtual ~VectorT();
    void test(std::vector<Tmp *> list);
};

} /* namespace std_test */

#endif /* VECTORT_H_ */
