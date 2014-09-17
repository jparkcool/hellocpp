/*
 * VectorT.cpp
 *
 *  Created on: 2014. 8. 23.
 *      Author: Joonyoung_Park
 */

#include "VectorT.h"

#include <cstdlib>

namespace std_test
{

VectorT::VectorT()
{
    string str("686.97f");
    float fff = atof(str.c_str());
    std::cout << "VectorT.cpp - VectorT::VectorT: " << fff << endl;

    std::vector<Tmp*> myvector;
    Tmp t1;
    t1.iii = 1111;
    Tmp t2;
    t2.iii = 2222;

    myvector.push_back(&t1);
    myvector.push_back(&t2);

//    for (std::vector<Tmp*>::iterator it = myvector.begin(); it != myvector.end(); ++it)
//    {
//        Tmp* ttt = (*it);
//        std::cout << "VectorT.cpp - ttt: " << ttt->iii << endl;
//    }
//

    test(myvector);

    for (unsigned int i = 0; i < myvector.size(); i++)
    {
        Tmp* ttt = myvector.at(i);
        std::cout << "VectorT.cpp - ttt: " << ttt->iii << endl;
    }
}

void VectorT::test(std::vector<Tmp *> myvector)
{
    std::cout << "VectorT.cpp - test: " << myvector.at(0)->iii << endl;
    std::cout << "VectorT.cpp - test: " << myvector.at(1)->iii << endl;
}

VectorT::~VectorT()
{
// TODO Auto-generated destructor stub
}

} /* namespace std_test */
