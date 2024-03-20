#ifndef TELECONT__H_
#define TELECONT__H_

// class Television;   //如果没有方法具体化，是可以的
#include "Television.h"
class TeleContraler
{
private:
    /* data */
public:
    TeleContraler(/* args */);
    void VUp(Television& T){
        T.Volume_++;
    }
    void VDowm(Television& T){
        T.Volume_--;
    }
    void CUp(Television& T){
        T.chennel_++;
    }
    void CDowm(Television& T){
        T.chennel_--;
    }
    ~TeleContraler();
};

TeleContraler::TeleContraler(/* args */)
{
}

TeleContraler::~TeleContraler()
{
}




#endif