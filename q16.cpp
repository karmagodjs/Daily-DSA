#include<iostream>
using namespace std;

int prime(int n, int i){
    if (n<=0)
    {
        return false;
    }
    if (i==1)
    {
        return true;
    }
    if (n%i==0)
    {
        return false;
    }
     return prime(n, i - 1);
}
int main()
{
    int N;
    cin>>N;
    if (prime(N,N/2))
    {
        cout<<"prime";
    }
    else
    {
        cout<<"not prime";
    }
    
    return 0;
}