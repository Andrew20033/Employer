#include <iostream>

class Employer
{
public:
    virtual void Print(void)
    {}
};
class President :public Employer
{
public:
    void Print()
    {
        std::cout << "President\n";
    }
};
class Manager :public Employer
{
public:
    void Print()
    {
        std::cout << "Manager\n";
    }
};
class Worker :public Employer
{
public:
    void Print()
    {
        std::cout << "Worker\n";
    }
};
int main()
{
    President president;
    Manager manager;
    Worker worker;

    Employer* emp = &president;
    emp->Print();
    emp = &manager;
    emp->Print();
    emp = &worker;
    emp->Print();
}