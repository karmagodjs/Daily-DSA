// pass by value
#include<iostream>
using namespace std;

void modify(int &x){
    x = x + 20;
}
int main()
{
    int x = 10;
    modify(x);
    cout<<x;
    return 0;
}