#include <iostream>
#include<math.h>
using namespace std;
int armstrto(int n, int d)
{
    if (n == 0)
    {
        return 0;
    }
    return pow(n % 10, d) + armstrto(n / 10, d);
}

int main()
{
    int N = 153;
    int k = to_string(N).length();
    if (armstrto(N, k)== N)
    {
        cout << N << " is an Armstrong number.";
    }
    else
    {
        cout << N << " is not an Armstrong number.";
    }
    return 0;
}