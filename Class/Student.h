
class Student
{
public: 
    void SetName(std::string name);
    std::string GetName();
    void SetAge(int age);
    int GetAge();
private:
    std::string sName;
    int age ;
}