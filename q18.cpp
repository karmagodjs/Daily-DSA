#include<iostream>
#include<string>
using namespace std;
void print(string name, int count, int N){
    if (count==N)
    {
        return;
    }

    cout<<name<<"\n";
    return print(name, count+1, N);
    
}
int main()
{
    int N = 5;
    string name = "DHRUV";
    print(name,0,N);
    return 0;
}