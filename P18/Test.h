#ifndef cout___
#define cout___
#include <iostream>
using namespace std;
class Test
{
private:
    /* data */
    static int count_2; //私有时，需要提供一个公开访问接口，便于封装
public:
    static int count_;  //属于类，类的每个实例都访问同一个内存 //静态变量引用性声明
    Test(int t_);
    ~Test();
    static int Getcount2();
    static const int count_temp = 200;  ///静态变量引用性声明,尽管初始化了，（但任然需要在类外定义 是错的）
    int t;
};

int Test::count_=0;   //静态变量定义性声明
int Test::count_2=0;   //静态变量定义性声明
// const int coutedobject::count_temp; //静态变量定义性声明
Test::Test(int t_):t(t_)
{
    cout<<"构造函数"<<t<<endl;
    ++count_;
    ++count_2;
}

int Test::Getcount2()
{
    // cout<<"t"<<t<<endl;  报错，无法访问非静态成员
    return count_2;
}

Test::~Test()
{
    cout<<"析构函数"<<t<<endl;
    --count_;
    --count_2;
}

#endif
