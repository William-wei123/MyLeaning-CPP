#include <iostream>
using namespace std;
int Add(int a, int b);      //a和b 不能同名，a和b也是块作用域
int test();
int num_ = 20;  //文件作用域,代码之外的数据
int main(){
    int num_ = 30;  //块作用域
    
    {
        /* code */
        int num_ = 40;  //块作用域

        cout<<"num_"<<num_<<endl;   //块作用域的num_
        cout<<"::num_"<<::num_<<endl;   //调用文件作用域的num_

    }
    test();
    
    return 0;
}

// int test(){
// LABEL1: //函数作用域，针对goto语句
//     cout<<"Label1"<<endl;
//     goto LABElL3;
// LABEL2:
//     cout<<"Label2"<<endl;
//     goto LABElL1;
// LABEL3:
//     cout<<"Label3"<<endl;
//     goto LABElL2;
// }