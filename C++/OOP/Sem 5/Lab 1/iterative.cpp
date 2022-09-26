#include<iostream>
using namespace std;

int main(){
    int n = 10;
    /* cout<<"Enter a number : ";
    cin>>n; */
    int sum = 0;
    for(int i = 1;i <= n;i++){
        sum += i;
    }
    cout<<"Sum of "<<n<<" number is : "<<sum<<endl;
    return 0;
}