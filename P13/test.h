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

    explicit test(int tempp);

    void Display();

    test& operator=(const test& other)  ;//返回引用，  operator=视作函数名

    ~test();
};

test::test(/* args */)
{
    cout<<"默认构造函数"<<0<<endl;
    temp = 0;
}

explicit test::test(int tempp)
{
    cout<<"单输入构造函数"<<tempp<<endl;
    temp = tempp;
}

void test::Display(){
    cout<<"temp:"<<temp<<endl;
}

test::~test()
{
    cout<<"destory:"<<temp<<endl;
}

test& test::operator=(const test& other){
    cout<<"test::operator="<<endl;

    if (this == &other){
        return *this;
    }
    temp = other.temp;

    return *this;
}

#endif