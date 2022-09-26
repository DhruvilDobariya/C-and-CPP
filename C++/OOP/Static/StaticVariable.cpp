#include<iostream>
using namespace std;

class StaticVariable
{
    private:
    int userId;
    string userName;

    public:
    static int count; // We can't initialize static variable here.

    void User(int id, string name)
    {
        userId = id;
        userName = name;
        count ++;
    }
};
// We initialize static variable here.
int StaticVariable :: count = 0;

int main()
{
    int id;
    string name;

    StaticVariable A; 
    cout<<"Enter a Id : ";
    cin>>id;
    cout<<"Enter a Name : ";
    cin>>name;
    A.User(id,name);
    cout<<"Count : "<<StaticVariable::count<<endl; // We use static variable like this => classname::variablename.

    StaticVariable B;
    cout<<"Enter a Id : ";
    cin>>id;
    cout<<"Enter a Name : ";
    cin>>name;
    B.User(id,name);
    cout<<"Count : "<<StaticVariable::count<<endl;

    return 0;
}