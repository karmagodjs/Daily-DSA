#include<iostream>
using namespace std;

int countnumber(int n){
    if(n==0)
    return 0;

    return 1 + countnumber(n/10);
}

int main()
{
    int N;
    cin>>N;
    if (N==0){
        cout<<1;
    }
    else
        cout<<countnumber(N);
    return 0;
}