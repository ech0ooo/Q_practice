#include "Myclass.h"

// 构造函数的实现
MyClass::MyClass() {
    data = 0;
}

// 成员函数的实现
void MyClass::MyFunction() {
    data++;
}

// 常量成员函数的实现
int MyClass::GetData() const {
    return data;
}
