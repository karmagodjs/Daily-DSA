#include<iostream>
using namespace std;

int revnum(int n, int rev){
    if (n==0)
    {
        return rev;
    }
    return revnum(n/10, rev*10+(n%10));
    
}
int main()
{
    int N;
    cin >> N;
    cout<<revnum(N,0);

    return 0;
}