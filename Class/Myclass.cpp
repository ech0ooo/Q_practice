#include "Myclass.h"

// ���캯����ʵ��
MyClass::MyClass() {
    data = 0;
}

// ��Ա������ʵ��
void MyClass::MyFunction() {
    data++;
}

// ������Ա������ʵ��
int MyClass::GetData() const {
    return data;
}
