#ifndef cout___
#define cout___
#include <iostream>
using namespace std;
class Singleton
{
private:
    /* data */
    
    Singleton();
    Singleton(const Singleton& other);
    Singleton& operator=(const Singleton& other);
    
    static Singleton* instance_;

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
    
    static Singleton* Getinstance1(){
        if (instance_ == NULL){  //方法1
            instance_ = new Singleton;
        }
        return instance_;
    }
    static Singleton& Getinstance2(){
        // if (instance_ == NULL){  //方法1
        //     instance_ = new Singleton;
        // }

        static Singleton instance_2;
        return instance_2;
    }
    ~Singleton();
    
};
Singleton* Singleton::instance_;
Singleton::Garbo Singleton::Garbo_;
// const int coutedobject::count_temp; //静态变量定义性声明
Singleton::Singleton()
{
    cout<<"创建实例"<<endl;

}



Singleton::~Singleton()
{
    cout<<"方法2消除实例"<<endl;

}

Singleton::Garbo::Garbo(/* args */)
{
}
    
Singleton::Garbo::~Garbo()  //方法1
{
    
    if (instance_ != NULL){
        cout<<"方法1消除实例"<<endl;
        delete instance_;   //此处会调用析构函数
    }
}

#endif
