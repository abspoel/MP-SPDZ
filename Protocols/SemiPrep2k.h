/*
 * SemiPrep2k.h
 *
 */

#ifndef PROTOCOLS_SEMIPREP2K_H_
#define PROTOCOLS_SEMIPREP2K_H_

#include "SemiPrep.h"

template<class T>
class SemiPrep2k : public SemiPrep<T>
{
public:
    SemiPrep2k(SubProcessor<T>* proc, DataPositions& usage) :
            RingPrep<T>(proc, usage), OTPrep<T>(proc, usage),SemiHonestRingPrep<T>(proc, usage), SemiPrep<T>(proc, usage)

    {
    }

    void get_dabit(T& a, typename T::bit_type& b)
    {
        this->get_one(DATA_BIT, a);
        b = a & 1;
    }
};

#endif /* PROTOCOLS_SEMIPREP2K_H_ */
