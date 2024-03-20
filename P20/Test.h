#ifndef cout___
#define cout___
#include <iostream>
using namespace std;
class Test
{
private:
    /* data */
    
    Test();
    Test(const Test& other);
    Test& operator=(const Test& other);
    
    static Test* instance_;

    class Garbo
    {
    private:
        /* data */
    public:
        Garbo(/* args */);
        ~Garbo();
    };
    
    static Garbo Garbo_;
    
    
public:
    int x_;
    mutable int outputcount_;
    Test(int x);
    int get_x() const;  //const 函数
    int get_x();
    int Output()const;
    int get_output()const;
    ~Test();
    
};
Test* Test::instance_;
Test::Garbo Test::Garbo_;
// const int coutedobject::count_temp; //静态变量定义性声明
Test::Test(int x):x_(x),outputcount_(0)
{
    cout<<"创建实例"<<endl;

}

int Test::get_x() const{
    // x_ =101; //这句话会报错，因为const 只能访问，不能修改
    cout<<"const 函数"<<endl;

    return x_;

}

int Test::get_x(){
    cout<<"非const 函数"<<endl;
    x_ =101; 
    return x_;

}

int Test::Output()const{
    outputcount_++;
    cout<<x_<<endl;
}

int Test::get_output()const{
     return outputcount_;
}

Test::~Test()
{
    cout<<"方法2消除实例"<<endl;

}

Test::Garbo::Garbo(/* args */)
{
}
    
Test::Garbo::~Garbo()  //方法1
{
    
    if (instance_ != NULL){
        cout<<"方法1消除实例"<<endl;
        delete instance_;   //此处会调用析构函数
    }
}

#endif
