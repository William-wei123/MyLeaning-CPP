// #include "String.h"
#include <iostream>
#include "Test.h"
using namespace std;

int n;  //未初始化的全局变量，初始值为0，存放在.BSS段中
int n2=100;//初始化的全局变量，，存放在.data段中
void main1(){
    
    const Test temp(10); //
    Test temp2(2); //
    temp.get_x();
    temp2.get_x();
    
    
}
void main2(){
    const Test temp(10); //
    Test temp2(2); //
    temp2.Output();
    temp2.Output();
    cout<<temp2.get_output()<<endl;
    temp.Output();
    temp.Output();
    cout<<temp.get_output()<<endl;

    
}

int main(void){
    main2();


    return 0;
}