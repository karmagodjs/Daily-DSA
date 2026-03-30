#include<iostream>
using namespace std;
void printDivisors(int n, int i){
    if (i>n)
    {
        return;
    }
    if (n%i==0)
    {
        cout<<i<<" ";
    }
    printDivisors(n, i+1);
}
int main()
{
    int N;
    cin >> N;
    printDivisors(N, 1);
    
    
    return 0;
}