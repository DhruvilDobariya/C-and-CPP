#include<iostream>
using namespace std;

int sum(int a){
    if(a <= 1)
        return a;
    return a + sum(a-1);
}
int main(){
    int n = 10;
    /* cout<<"Enter a number : ";
    cin>>n; */
    cout<<"Sum of "<<n<<" number is : "<<sum(10)<<endl;
    return 0;
}