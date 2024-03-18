#ifndef __CLASS_A
#define __CLASS_A
#include "ClassA.h"

class A;    //前向声明，但无法实例化，只可以定义指针和引用


class ClassB
{
private:
    /* data */
public:
    ClassB(/* args */);
    ~ClassB();
};


#endif