#include<iostream>
using namespace std;

class StaticMethod
{
    private:
    int userId;
    string userName;
    static int count; // We can't initialize static variable here.

    public:
    int static getCount()
    {
        return count;
    }

    void User(int id, string name)
    {
        userId = id;
        userName = name;
        count ++;
    }
};
// We initialize static variable here.
int StaticMethod :: count = 0;

int main()
{
    int id;
    string name;

    StaticMethod A; 
    cout<<"Enter a Id : ";
    cin>>id;
    cout<<"Enter a Name : ";
    cin>>name;
    A.User(id,name);
    cout<<"Count : "<<StaticMethod::getCount()<<endl; // We call static method like this => classname::methodname(args).

    StaticMethod B;
    cout<<"Enter a Id : ";
    cin>>id;
    cout<<"Enter a Name : ";
    cin>>name;
    B.User(id,name);
    cout<<"Count : "<<StaticMethod::getCount()<<endl;

    return 0;
}