#ifndef TEST__H_
#define TEST__H_
//内联函数只是给编译器一个提示，把代码按照内联解析，但编译器还是会根据代码语句和长度选择是否按照内联解析
class test
{
public:
    int ADD(int a, int b);

    //内联函数定义二，直接在声明的时候定义
    int SUB(int a, int b){
        return a-b;
    }
    //函数的重载，函数名一样，函数输入参数不同
    void Init();
    void Init(int a);
    void Init(int a, int b);
    void Init(int a, int b, int c);
    void Display();

    void Init1(int a=0,int b=0,int c=0);
    
private:
    int a_;
    int b_;
    int c_;
};




#endif