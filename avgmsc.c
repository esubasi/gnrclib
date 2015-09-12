#include "avgmsc.h"

uint16_t avg8bt(uint8_t *inp, uint8_t lng){
    uint8_t     i   = 0;
    uint16_t    sum = 0;

    for( ; i<lng ; ++i ){
        sum += inp[i];
    }
    return(sum/lng);
}

uint64_t avg64bt(uint64_t *inp, uint64_t lng){
    uint64_t     i  = 0;
    uint64_t    sum = 0;

    for( ; i<lng ; ++i ){
        sum += inp[i];
    }
    return(sum/lng);
}
