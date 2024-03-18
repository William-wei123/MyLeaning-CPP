#ifndef __TEST_H__
#define __TEST_H__
#include <iostream>
using namespace std;
class test
{
private:
    /* data */
    int temp;
public:
    test(/* args */);   //默认构造函数

    test(int tempp);

    void Display();

    ~test();
};

test::test(/* args */)
{
    temp = 0;
}

test::test(int tempp)
{
    temp = tempp;
}

void test::Display(){
    cout<<"temp:"<<temp<<endl;
}

test::~test()
{
    cout<<"destory:"<<temp<<endl;
}


#endif