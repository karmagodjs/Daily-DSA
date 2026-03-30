#include<iostream>
using namespace std;
void print(int current, int n){
    if(current==n)
    return;
    cout<<current<<"\n";

    print(current+1,n);
}
int main()
{
    int n = 10;
    print(1,n);
    return 0;
}