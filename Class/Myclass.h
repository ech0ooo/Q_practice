#ifndef MYCLASS_H
#define MYCLASS_H

class MyClass {
public:
    MyClass(); // 构造函数声明
    void MyFunction(); // 成员函数声明
    int GetData() const; // 常量成员函数声明
private:
    int data;
};

#endif // MYCLASS_H
