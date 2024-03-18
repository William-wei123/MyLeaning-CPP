#include <iostream>
using namespace std;

int main(){
    int val = 100;
    int& refval = val;  //引用必须初始化,并且不可指向其他变量
    refval = 200;
    cout<<val<<endl;
    int val2 = 500;
    refval = val2;
    cout<<val<<endl;
    return 0;
}
