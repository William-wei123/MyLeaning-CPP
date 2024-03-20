#include "test.h"

void Test_Func(const test t){   //值传递，初始化t时也会调用拷贝构造函数


}
void Test_Func2(const test &t){ //传递引用，不会调用拷贝构造函数

}
test Test_func3(const test &t){
    return t;//会调用拷贝构造函数，是在返回时调用的，而且引用接收会报错 
}

test& Test_func4(test &t){
    return t;////如果是引用接受不会调用拷贝构造函数，如果是对象接受，会调用拷贝构造
}

const test& Test_func5(const test &t){
    return t;//如果是引用接受不会调用拷贝构造函数，如果是对象接受，会调用拷贝构造
}

void main1(){
    test t1(10);
    test t2(t1);        //调用拷贝构造函数  等价于test t2 = t1
}
void main2(){
    test t1(10);
    test t2;
    // // Test_Func(t1);        //调用拷贝构造函数 相当于t1初始化化形参t
    // Test_Func2(t1);     //此次不会调用拷贝构造函数，无内存的复制
    // Test_func3(t1);     //返回，即销毁func3
    // test t3(300);
    // t3 = Test_func3(t2);//返回并调用赋值运算符，然后销毁func3的临时变量
    // test t4 = Test_func3(t2);   //临时变量会变成有名变量，不会销毁func3的临时变量
    // test& t5 = Test_func3(t2);   //临时变量会变成有名引用变量，不会销毁func3的临时变量  报错
    std::cout<<"查看func的返回参数，啥时候销毁"<<std::endl;
    // test& t6 = Test_func4(t2);
    test t7 = Test_func4(t2);

}

int main(void){
    main2();


    return 0;
}