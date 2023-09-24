#include "Myclass.h"
#include"Student.h"

int main()
{
    MyClass myObject;
    myObject.MyFunction();
    int value = myObject.GetData();//µ÷ÓÃº¯Êý
    Student student1;
    student1.SetName("ross");
    student1.SetAge(18);

    return 0;
}