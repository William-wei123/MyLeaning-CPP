#ifndef __test_H__
#define __test_H__
#include <iostream>
//子对象类
class Object
{
private:
    /* data */
    int temp_;
public:
    Object(/* args */);
    Object(int temp);
    ~Object();
};

Object::Object(/* args */)
{
    std::cout<<"Object hello"<<std::endl;
}
Object::Object(int temp = 0):temp_(temp)
{
    std::cout<<"Object hello "<<temp_<<std::endl;
}

Object::~Object()
{
    std::cout<<"Object bye "<<temp_<<std::endl;
}


//容器
class contain
{
private:
    /* data */
    Object O1;
    Object O2;
public:
    // contain(/* args */);
    contain(int obj1, int obj2);
    ~contain();
};

// contain::contain(/* args */)
// {
//     std::cout<<"contain hello"<<std::endl;
// }

contain::contain(int obj1=0, int obj2=0):O2(obj2),O1(obj1)  /*还是先调用O1的构造，
                                                            只与定义时的顺序有管，
                                                            与初始化列表顺序无管*/ 
{
    std::cout<<"contain hello"<<std::endl;
}
contain::~contain()
{
    std::cout<<"contain bey"<<std::endl;
}


class OBJ
{
private:
    /* data */
    int num_;
    const int KNUM_;
    int &renum_;
public:
    enum E_TYPE
    {
        Type_A = 100,
        Type_B = 200
    };
public:
    OBJ(int num);

    void Display();

    ~OBJ();
};

OBJ::OBJ(int num = 0):num_(num),KNUM_(num+1),renum_(num_)
{
    // KNUM_ = num+1;   //报错
    // renum_ = num_;
    std::cout<<"init num_: "<<num_<<std::endl;
    std::cout<<"init KNUM_: "<<KNUM_<<std::endl;
    std::cout<<"init renum_ -> num_: "<<KNUM_<<std::endl;
    renum_ += 10;
    std::cout<<"renum_: "<<renum_<<std::endl;
    std::cout<<"num_: "<<num_<<std::endl;

}

void OBJ::Display(){
    std::cout<<" num_: "<<num_<<std::endl;
    std::cout<<" KNUM_: "<<KNUM_<<std::endl;
    std::cout<<" renum_ -> num_: "<<KNUM_<<std::endl;

    std::cout<<" E_TYPEA: "<<Type_A<<std::endl;
    std::cout<<" E_TYPEB: "<<Type_B<<std::endl;

}

OBJ::~OBJ()
{
}


#endif