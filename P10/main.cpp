#include "test.h"
/*
*C++ 中的结构体有成员函数
*结构体也是类，区别在于
*结构体默认public
*类默认private
* 而且结构体可以像C那样直接赋值初始化
*/
int main(){
    test temp;
    temp.Init();
    temp.Display();
    temp.Init(1);
    temp.Display();
    temp.Init(1,2);
    temp.Display();
    temp.Init(1,2,3);
    temp.Display();

    temp.Init1();
    temp.Display();
    temp.Init1(1);
    temp.Display();
    temp.Init1(1,2);
    temp.Display();
    temp.Init1(1,2,3);
    temp.Display();

    return 0;
}