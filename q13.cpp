#include<iostream>
using namespace std;
int pali(int n, int rev){
    if (n==0)
    {
        return rev;
    }
    return pali(n/10, rev*10+(n%10));
    
}
int main()
{
    int N;
    cin>>N;
    if (N==(pali(N,0)))
    {
        cout<< "palidro";
    }else{
        cout<<"not palidro";
    }
    return 0;
}