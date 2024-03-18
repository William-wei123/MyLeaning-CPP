# MyLeaning-CPP
个人C++学习中的代码，跟学视频[B站](https://www.bilibili.com/video/BV1AY411D74b?p=25&vd_source=4e94590dd731b8be5c5238b2564a75c3)

## 主要内容
### P5
C++的引用使用 用& ，引用必须初始化,并且不可指向其他变量

### P9 
类的使用，私有和公有

### P10
1. 内联 inline 关键字
2. 函数的重载：函数的重载，函数名一样，函数输入参数不同
```
/*
*C++ 中的结构体有成员函数
*结构体也是类，区别在于
*结构体默认public
*类默认private
* 而且结构体可以像C那样直接赋值初始化
```
### P11
#### 作用域
    1. 块作用域-->花括号内，块作用域
    2. 文件作用域 -->文件内的全局变量
    3. 函数原型作用域
    4. 函数作用域
    5. 类作用域

#### 前向声明：
    1. C++中类必须先定义，才能够实例化。
    2.两个类需要相互引用形成一个“环形”引用时，无法先定义使用。这时候需要用到前向声明
