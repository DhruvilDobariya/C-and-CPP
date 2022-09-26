#include<iostream>
using namespace std;

class Employee
{
    private:
    int a, b; // We can't access a and b directly, because it's privat variable.
    // We access a and b using public method of it's class.

    public:
    int c, d;
    void setA(int a1)
    {
        a = a1;
    }
    void setB(int b1); // We can also define this function out side of class.
    void setC(int c1)
    {
        c = c1;
    }
    int getA()
    {
        return a;
    }
    int getB()
    {
        return b;
    }
    int getC()
    {
        return c;
    }
};
/* 
 * Here we defind a function who exist in A class.
 * Like this : returntype classname :: functionname (args){    code    }
 * When we define function who exist in class, then we use scope resolution operator '::'.
*/
void Employee :: setB(int b1) 
{
    b = b1;
}
int main()
{
    Employee obj1;
    obj1.setA(4);
    obj1.setB(7);
    obj1.setC(21);

    cout<<"This is a : "<<obj1.getA()<<endl;
    cout<<"This is b : "<<obj1.getB()<<endl;
    cout<<"This is c : "<<obj1.getC()<<endl;

    return 0;
}