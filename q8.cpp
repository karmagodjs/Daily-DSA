#include<iostream>
using namespace std;
void accchart(string s){
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s[i];
    }
    
}
int main()
{
    string s = "dhruv";
    accchart(s);
    return 0;
}